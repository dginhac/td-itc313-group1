/**
  * File:     customer.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Customer class for bank account
  */

#include <string>
#include <iostream>
#include "date.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

namespace people {

    enum class Gender {
        woman, man
    };

    class Customer {
    public:
        Customer(std::string firstname,
                 std::string lastname,
                 date::Date birthday,
                 Gender gender
                 );
        std::string firstname() const;
        std::string lastname() const;
        date::Date birthday() const;
        Gender gender() const;

    private:
        std::string _firstname;
        std::string _lastname;
        date::Date _birthday;
        Gender _gender;
    };

    std::string fullIdentity(const Customer& customer);

    std::ostream& operator<<(std::ostream& os, const  Customer& customer);

} // people

#endif // CUSTOMER_H