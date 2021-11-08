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

   bank::Account a1(c1, "FR76XXXX", 1000.00);

   people::Customer c2("Bill", "Gates", d1, people::Gender::man);
   bank::Account a2(c2, "US76XXXX", 100000.00);


   std::cout << "Hello " << c1 << std::endl;

   double balance = a1.balance();
   std::cout << std::setprecision(9)<< "balance: " << balance << std::endl;

   std::string iban = a1.iban();
   std::cout << "iban: " << iban << std::endl;

   std::cout << a1 ;
   a1.debit(212.5);

   a1.debit(-12.5);
   std::cout << a1 ;

   a1.debit(100002.5);
   std::cout << a1 ;

   a1.credit(123);
   std::cout << a1 ;

   a1.credit(-123);
   std::cout << a1 ;

/*
   std::cout << "transfer with method" << std::endl;
   a1.transfer(a2, 50);
   std::cout << a1 ;
   std::cout << a2 ;
*/

   std::cout << "transfer with helper" << std::endl;
   transfer(a1,a2, 100);
   std::cout << a1 ;
   std::cout << a2 ;


   bank::Account a3(c1, "FR76XXXX");
   std::cout << a3 ;

   std::cout << "bye." << std::endl;

   bank::Saving s1(c1, "FR76XXX", -123, 4);


   return 0;
}
