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

  }