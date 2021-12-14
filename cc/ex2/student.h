/** 
  * File:     student.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021 
  * Course:   C-C++ Programming / Esirem 3A 
  * Summary:  Student class
  */

#include <string>
#include <iostream>

class Student {
public:
  Student(std::string name, double mark);
  std::string name() const;
  double mark() const;
  void update_mark(double mark);

	
private:
	std::string _name;
	double _mark;
};

std::ostream& operator<< (std::ostream& os, const Student& student);

