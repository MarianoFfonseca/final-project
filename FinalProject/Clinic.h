#pragma once
#include "Doctor.h"
#include "Nurse.h"

class Clinic {
public:
	Clinic(); //default constructor

	Clinic(int); //parametized constructor

	~Clinic(); //deconstructor

	Nurse* getNurseAr(); // returns a pointer to the array of nurses

	void setNurseAr(Nurse* newNurseAr);

	friend class Doctor;

	

private:
	int sizeNurseAr_;
	int nbNurses_;
	Nurse* arNurses_;
	int nbDoctors = 2;

};