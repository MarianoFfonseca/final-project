#include "Nurse.h"

int Nurse::nurseCount_ = 1; //concatinated with title to make ID, DO NOT DEINCRIMENET! 

Nurse::Nurse(): Employee() { //Default Constructor
	nurseID_ = "N/A";
	specialty_ = "N/A";
	practitioner_ = 0;
}


//Parametized Constructor
Nurse::Nurse(std::string fName, std::string lName, std::string stAddress, int zip, std::string city, int dayBirth, int monthBirth, int yearBirth, std::string sSN, char gender, double salary, std::string specialty, bool practitioner) :
	Employee(fName, lName, stAddress, zip, city, dayBirth, monthBirth, yearBirth, sSN, gender, salary) {

	nurseID_ = nurseTitle + std::to_string(nurseCount_); //concatinates the nurse title and the number of nurse objects created to make a unique ID. 
	nurseCount_++; //incremenets the nurseCount for the next object created

	specialty_ = specialty;

	practitioner_ = practitioner;



}

std::string Nurse::getNurseID() { //returns nurseID
	return nurseID_;
}

bool Nurse::operator== (const Nurse& other) const { //overloading the == operator
	return nurseID_ == other.nurseID_;
}

bool Nurse::operator!= (const Nurse& other) const { //overloading the != operator
	return nurseID_ != other.nurseID_;
}