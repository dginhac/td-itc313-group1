/**
  * File:     account.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Implementation of class Account
  */

#include "account.h"
//#include <assert>

namespace bank {
    Account::Account(people::Customer customer,
                     double balance, std::string iban) :
                    _customer(customer), _balance(balance), _iban(iban) {
                        assert("Balance must be positive to create an account" && balance > 0.0);
                    }

    people::Customer Account::customer() const {
        return _customer;
    }

    double Account::balance() const {
        return _balance;
    }

    std::string Account::iban() const {
        return _iban;
    }

    bool Account::debit(double amount) {
        if ((amount <0) || (amount > _balance)) {
            return false;
        }
        _balance -= amount;
        return true;
    }




    bool Account::credit(double amount) {
        if (amount <0) {
            return false;
        }
        _balance += amount;
        return true;
    }

    /*
    bool Account::transfer(Account& account, double amount) {
        if (!debit(amount)) {
            return false;
        }
        account.credit(amount);
        return true;
    }
    */

    bool transfer(Account& source, Account& dest, double amount) {
        if (!source.debit(amount)) {
            return false;
        }
        dest.credit(amount);
        return true;
    }

    std::ostream& operator<<(std::ostream& os, const Account& account) {
        os << "Customer : " << account.customer() << std::endl;
        os << "  Balance: " << account.balance() << std::endl;
        os << "  IBAN: " << account.iban() << std::endl;
        return os;
    }

  }