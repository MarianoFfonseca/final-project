#pragma once
#include "Person.h"

class Employee :public Person {
public:

	Employee(); //default constructor

	Employee(std::string, std::string, std::string, int, std::string, int, int, int, std::string, char, double); //parametized constructor

	double getSalary(); //getter

	void setSalary(double); //setter

protected:
	double salary_;
};