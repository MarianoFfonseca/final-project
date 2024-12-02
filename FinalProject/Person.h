#pragma once
#include <string>
class Person {
public:
	Person(); //Default Constructor

	Person(std::string, std::string, std::string, int, std::string, int, int, int, std::string, char); //Paramertized Constructor
	
	//getters

	std::string getFirstName();
	std::string getLastName();
	std::string getStreetAddress();
	int	getZipCode();
	std::string getCity();
	int getDayBirth();
	int getMonthBirth();
	int getYearBirth();
	std::string getSSN();
	char getGender();

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