#include "Employee.h"

Employee::Employee():Person() { //default constructor
	salary_ = 0;
} 

Employee::Employee(std::string fName, std::string lName, std::string stAddress, int zip, std::string city, int dayBirth, int monthBirth, int yearBirth, std::string sSN, char gender, double salary) : //paramerterized constructor
	Person(fName, lName, stAddress, zip, city, dayBirth, monthBirth, yearBirth, sSN, gender) {

	salary_ = salary;

}

double Employee::getSalary() { return salary_; }

void Employee::setSalary(double salary) { salary_ = salary; }