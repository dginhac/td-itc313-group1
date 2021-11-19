/**
  * File:     todo.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique

  * Summary:  Declaration of Todo Class
  */

#include <string>

#ifndef TODO_H
#define TODO_H

namespace todo {
    class Todo {
    public:
        Todo(int id, std::string title, std::string description, bool status);
    private:
        int _id;
        std::string _title;
        std::string _description;
        bool _status;
    };
}


#endif // TODO_H

