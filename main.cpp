/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   12 oct. 2021 - 08h43
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A - TD1 Gr1
 */

#include <iostream>
#include <iomanip>
#include "date.h"
#include "customer.h"
#include "account.h"



int main(int argc, char const *argv[]) {


   date::Date d1(5,26);
   people::Customer c1("Dom", "Ginhac", d1, people::Gender::man);

   bank::Account a1(c1, 123456.78, "FR76XXXX");

   std::cout << "Hello " << c1 << std::endl;
   people::Customer c1bis = a1.customer();
   std::cout << "Hello again " << c1bis << std::endl;

   double balance = a1.balance();
   std::cout << std::setprecision(9)<< "balance: " << balance << std::endl;

   std::string iban = a1.iban();
   std::cout << "iban: " << iban << std::endl;

   std::cout << a1 << std::endl;
   std::cout << "bye." << std::endl;
   return 0;
}
