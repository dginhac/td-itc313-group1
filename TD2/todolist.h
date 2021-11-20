/**
  * File:     todolist.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  declaration of class Todolist
  */

#include <vector>
#include "todo.h"

#ifndef TODOLIST_H
#define TODOLIST_H

namespace todo {
    class Todolist {
    public:
        Todolist();
    private:
        std::vector<Todo> _todos;
    };
}

#endif // TODOLIST_H
