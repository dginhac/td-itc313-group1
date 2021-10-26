/**
  * File:     account.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of Class Account
  */

#include <string>
#include "date.h"
#include "customer.h"

#ifndef ACCOUNT_H
#define ACCOUNT_H

namespace bank {
    class Account
    {
    public:
        Account(people::Customer customer, double balance, std::string iban);
        people::Customer customer() const;
        double balance() const;
        std::string iban() const;

    private:
        people::Customer _customer;
        double _balance;
        std::string _iban;
    };

    std::ostream& operator<<(std::ostream& os, Account& account);
}


#endif // ACCOUNT_H
