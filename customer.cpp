/**
  * File:     customer.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Implementation of Customer Class
  */


#include "customer.h"

namespace people {

    Customer::Customer(std::string firstname,
                 std::string lastname,
                 date::Date birthday,
                 Gender gender) :
                 _firstname(firstname), _lastname(lastname),
                 _birthday(birthday), _gender(gender) {}

    std::string Customer::firstname() const {
        return _firstname;
    }

    std::string Customer::lastname() const {
        return _lastname;
    }

    date::Date Customer::birthday() const {
        return _birthday;
    }

    Gender Customer::gender() const {
        return _gender;
    }

    std::string fullIdentity(Customer customer)  {
        std::string gender;
        if (customer.gender() == Gender::woman) {
            gender = "Ms";
        }
        else {
            gender = "Mr";
        }
        return gender + " " +
               customer.firstname() + " " +
               customer.lastname();
    }

    std::ostream& operator<<(std::ostream& os, Customer& customer) {
        os << fullIdentity(customer) << " (" << toString(customer.birthday()) << ")";
        return os;
    }


}
