/**
  * File:     main.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  test app
  */
#include <iostream>
#include "todo.h"

int main(int argc, char const *argv[])
 {
     todo::Todo my_todo(1,"Run a marathon",
                        "Train and run next Paris Marathon", false);
     std::cout << "Bye." << std::endl;
     return 0;
 }
