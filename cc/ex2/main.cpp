/*
* @Author: Dominique Ginhac <d0m>
* @Date:   2021-11-26 14:22:27
* @Last Modified by:   d0m G
* @Last Modified time: 2021-12-14 11:57:26
*/

#include <iostream>
#include <vector>
#include "student.h"


double mean(const std::vector<Student>& data) {
	double m=0.0;
	for (auto student : data) {
		m+= student.mark();
	}
/* Autres manieres
	for (auto i=0;i<data.size(); i++) {
		m+= (data.at(i)).mark();
	}

	for (auto it=data.begin();it!=data.end();++it) {
		m+= (*it).mark();
	}
	*/

	m = m/data.size();
	return m;
}


std::ostream& operator<< (std::ostream& os, const std::vector<Student>& students) {
	for (auto student : students) {
		os << student;
	}
	return os;
}

// Modification des données originales
void update1(std::vector<Student>& input, double diff) {
	for (auto& student: input) {
		student.update_mark(student.mark()-diff);
	}
}

// Creation d'un nouveau vecteur
std::vector<Student> update2(const std::vector<Student>& input, double diff) {
	std::vector<Student> output;
	for (auto student: input) {
		Student new_student(student.name(), student.mark()-diff);
		output.push_back(new_student);
	}
	return output;
}

// Modification des données originales avec std::transform

void update3(std::vector<Student>& input, double diff) {
	std::transform( input.begin(),
					input.end(),
					input.begin(),
					[diff](Student s) {s.update_mark(s.mark()-diff); return s;});

}

void update4(std::vector<Student>& input, double diff) {
	std::transform( input.begin(),
					input.end(),
					input.begin(),
					[diff](Student s) {
						Student new_s(s.name(), s.mark()-diff);
						return new_s;
					});
}

// Creation d'un nouveau vecteur avec std::transform

std::vector<Student>  update5(const std::vector<Student>& input, double diff) {
	std::vector<Student> output;
	std::transform( input.begin(),
					input.end(),
					std::back_inserter(output),
					[diff](Student s) {
						Student new_s(s.name(), s.mark()-diff);
						return new_s;
					});
	return output;
}

std::vector<Student>  update6(const std::vector<Student>& input, double diff) {
	std::vector<Student> output;
	std::transform( input.begin(),
					input.end(),
					std::back_inserter(output),
					[diff](Student s) {
						s.update_mark(s.mark()-diff);
						return s;
					});
	return output;
}


void sort(std::vector<Student>& input) {
	std::sort(  input.begin(),
				input.end(),
				[](const Student& s1, const Student& s2) {
					return s1.mark() > s2.mark();
				});
}

int main(int argc, char const *argv[])
{
	Student s1("S. Jobs", 14.5);
	Student s2("D. Ginhac", 18.5);
	Student s3("B. Gates", 8.0);
	Student s4("A. Turing", 12.5);

	(((((std::cout << s1) << s2) << s3) << s4) << std::endl);

	std::vector<Student> students;
	students.push_back(s1);
	students.push_back(s2);
	students.push_back(s3);
	students.push_back(s4);

	std::cout << "Liste initiale :" << std::endl; 
	std::cout << students;

	double m = mean(students);
	std::cout << "Moyenne = " << m << std::endl;

	/*
	update1(students, m-12);
	std::cout << "Liste modifiee :" << std::endl;
	std::cout << students;
	m = mean(students);
	std::cout << "Nouvelle Moyenne = " << m << std::endl;
	*/
	/*
	std::vector<Student> students2;
	students2 = update2(students, m-12);
	std::cout << "Liste créée :" << std::endl;
	std::cout << students2;
	m = mean(students2);
	std::cout << "Moyenne nouvelle liste = " << m << std::endl;
	std::cout << students;
	*/

/*
	update4(students, m-12);
	std::cout << "Liste modifiee :" << std::endl;
	std::cout << students;
	m = mean(students);
	std::cout << "Nouvelle Moyenne = " << m << std::endl;
*/

	std::vector<Student> students5;
	students5 = update6(students, m-12);
	std::cout << "Liste créée :" << std::endl;
	std::cout << students5;
	m = mean(students5);
	std::cout << "Moyenne nouvelle liste = " << m << std::endl;
	std::cout << students;

	sort(students);
	std::cout << "Liste triée :" << std::endl;
	std::cout << students;


	return 0;
}