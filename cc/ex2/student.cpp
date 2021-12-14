/*
* @Author: Dominique Ginhac <d0m>
* @Date:   2021-11-26 14:22:25
* @Last Modified by:   d0m
* @Last Modified time: 2021-11-30 09:16:04
*/

#include "student.h"


Student::Student(std::string name, double mark) : _name(name), _mark(mark) {}

std::string Student::name() const {
	return _name;
}

double Student::mark() const {
	return _mark;
}

void Student::update_mark(double mark) {
	_mark = mark;
}


std::ostream& operator<< (std::ostream& os, const Student& student) {
	os << student.name() << " - " << student.mark() << std::endl;
	return os;
}