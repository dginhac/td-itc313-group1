/**
  * File:     account.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Implementation of class Account
  */

#include "account.h"

namespace bank {
    Account::Account(people::Customer customer,
                     double balance, std::string iban) :
                    _customer(customer), _balance(balance), _iban(iban) {}

    people::Customer Account::customer() const {
        return _customer;
    }

    double Account::balance() const {
        return _balance;
    }

    std::string Account::iban() const {
        return _iban;
    }

    std::ostream& operator<<(std::ostream& os, Account& account) {

        people::Customer customer = account.customer();
        os << "Customer : " << customer << std::endl;
        double balance = account.balance();
        os << "  Balance: " << balance << std::endl;
        std::string iban = account.iban();
        os << "  IBAN: " << iban << std::endl;
        return os;
    }

  }