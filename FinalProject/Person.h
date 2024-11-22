#pragma once
#include <string>
class Person {
public:
	Person(); //Default Constructor

	Person(std::string, std::string, std::string, int, std::string, int, int, int, std::string, char); //Paramertized Constructor

protected:
	std::string fName_;
	std::string lName_;
	std::string stAddress_;
	int	zipCode_;
	std::string city_;
	int dayBirth_;
	int monthBirth_;
	int yearBirth_;
	std::string SSN_;
	char gender_;
};