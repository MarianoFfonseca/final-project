#pragma once
#include "Doctor.h"
#include "Nurse.h"

class Doctor;

class Clinic {
public:
	Clinic(); //default constructor

	Clinic(int); //parametized constructor

	~Clinic(); //deconstructor

	Doctor* getDoctorAr(); //returns a pointer to the array of doctors

	Nurse* getNurseAr(); // returns a pointer to the array of nurses
	
	

	void setNurseAr(Nurse* newNurseAr);


	friend class Doctor;

	int getSizeNrAr();
	int getNbNurses();
	int getNbDr();
	

private:
	int sizeNurseAr_;
	int nbNurses_;
	Doctor* arDoctors_;
	Nurse* arNurses_;
	int nbDoctors_ = 2;

};