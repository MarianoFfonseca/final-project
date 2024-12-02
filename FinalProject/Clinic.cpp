#include "Clinic.h"

Clinic::Clinic():sizeNurseAr_(0), nbNurses_(0){ //default constructor
	arNurses_ = nullptr;
}

Clinic::Clinic(int sizeNurseAr) :sizeNurseAr_(sizeNurseAr), nbNurses_(0) { //parametized constructor
	arNurses_ = new Nurse[sizeNurseAr_]; //dynamic array of nurses
	arDoctors_ = new Doctor[nbDoctors_];//dynamic array of doctors
}

Clinic::~Clinic() { //deconstructor
	delete[] arNurses_;
	delete[] arDoctors_;
}

Nurse* Clinic::getNurseAr() { return arNurses_; }

Doctor* Clinic::getDoctorAr() { return arDoctors_; }

void Clinic::setNurseAr(Nurse* newNurseAr) {
	arNurses_ = newNurseAr;
}

int Clinic::getSizeNrAr() { return sizeNurseAr_; }
int Clinic::getNbNurses() { return nbNurses_; }
int Clinic::getNbDr() { return nbDoctors_; }