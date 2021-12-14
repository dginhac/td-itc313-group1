/**
  * File:     main.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  test
  */

#include <iostream>
#include "pokemon.h"

int main(int argc, char const *argv[])
{
    Pokemon p2("salameche", 70);
    Pokemon p1("pikachu", 50);
    if (p1 < p2) {
        std::cout << p1.name() << " a moins de PV que " << p2.name() << std ::endl ;
    }
    bool f = p2.fight(p1);
    std::cout << "Combat de " << p2.name() << " vs " << p1.name() << " - Resultat : " << f << std::endl;
    std::cout << p1.name() << " - " << p1.pv() << std::endl;
    std::cout << p2.name() << " - " << p2.pv() << std::endl;

    bool f2 = fight2(p1,p2);
    std::cout << "Combat de " << p1.name() << " vs " << p2.name() << " - Resultat : " << f2 << std::endl;
    std::cout << p1.name() << " - " << p1.pv() << std::endl;
    std::cout << p2.name() << " - " << p2.pv() << std::endl;


    return 0;
}