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
        Account(people::Customer customer, std::string iban, double balance=0.0);
        people::Customer customer() const;
        double balance() const;
        std::string iban() const;
        bool debit(double amount);
        bool credit(double amount);
        //bool transfer(Account& account, double amount);


    private:
        people::Customer _customer;
        double _balance;
        std::string _iban;
    };

    std::ostream& operator<<(std::ostream& os, const Account& account);
    bool transfer(Account& source, Account& dest, double amount);

    class Saving : public Account {
    public:
        Saving(people::Customer customer, std::string iban, double balance=0.0, double rate=2.0);
        bool credit(double amount);
    private:
        double _rate;
    };

}


#endif // ACCOUNT_H
