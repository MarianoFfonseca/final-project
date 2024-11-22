#pragma once
#include "Person.h"

class Patient :public Person {
public:
	Patient(); //default constructor

	Patient(std::string, std::string, std::string, int, std::string, int, int, int, std::string, char, std::string); //parameterized constructor

	std::string getPtID(); //returns patient ID
	std::string getNurseID(); //returns patient ID

	bool operator==(const Patient& other) const; //overloading the == operator

	bool operator!=(const Patient& other) const; //overloading the != operator

private:
	static int ptCount_; //used to make the patient ID
	std::string ptTitle = "pt"; //used to make the patient ID
	std::string ptID_;
	std::string nurseID_;
};