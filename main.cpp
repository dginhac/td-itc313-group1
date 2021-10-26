/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   12 oct. 2021 - 08h43
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A - TD1 Gr1
 */

#include <iostream>
#include "date.h"
#include "customer.h"



int main(int argc, char const *argv[]) {

   date::Date d1(5,26);
   people::Customer c1("Dom", "Ginhac", d1, people::Gender::man);

   std::cout << "Hello " << fullIdentity(c1) << std::endl;
   std::cout << "bye." << std::endl;
   return 0;
}
