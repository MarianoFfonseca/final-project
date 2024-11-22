#include "Patient.h"

int Patient::ptCount_ = 1;

Patient::Patient() :Person() { //default constructor
	
	ptID_ = "N/A";
	nurseID_ = "N/A";
}

//paramerterized constructor
Patient::Patient(std::string fName, std::string lName, std::string stAddress, int zip, std::string city, int dayBirth, int monthBirth, int yearBirth, std::string sSN, char gender, std::string nurseID) :
	Person(fName, lName, stAddress, zip, city, dayBirth, monthBirth, yearBirth, sSN, gender) {
	ptID_ = ptTitle + std::to_string(ptCount_);
	ptCount_++;
	nurseID_ = nurseID;
}


std::string Patient::getPtID() { return ptID_; } //returns patient ID
std::string Patient::getNurseID() { return nurseID_; }//returns nurse ID


bool Patient::operator== (const Patient& other) const { //overloading the == operator
	return ptID_ == other.ptID_;
}

bool Patient::operator!= (const Patient& other) const { //overloading the != operator
	return ptID_ != other.ptID_;
}