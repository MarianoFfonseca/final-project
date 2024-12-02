#pragma once
#include "Employee.h"

class Nurse :public Employee {
public:
	
	Nurse(); //default constructor

	Nurse(std::string, std::string, std::string, int, std::string, int, int, int, std::string, char, double, std::string, bool);

	std::string getNurseID();
	std::string getSpecialty();
	bool getPracticioner();


	bool operator==(const Nurse& other) const; //overloading the == operator

	bool operator!=(const Nurse& other) const; //overloading the != operator

	/*bool reward();*/  //NEEDS TO BE MADE AFTER APPOINTMENTS ARE FINISHED

private:
	static int nurseCount_; //used to make the nurse ID
	std::string nurseTitle = "nr"; //used to make the nurse ID
	std::string nurseID_;
	std::string specialty_;
	bool practitioner_; 

};
