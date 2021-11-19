/**
  * File:     todo.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Implementation of Todo class
  */


#include "todo.h"
namespace todo {

    Todo::Todo(int id, std::string title, std::string description, bool status) :
    _id(id), _title(title), _description(description), _status(status) {

    }

} // todo