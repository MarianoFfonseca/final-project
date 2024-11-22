#include "Clinic.h"

Clinic::Clinic():sizeNurseAr_(0), nbNurses_(0){
	arNurses_ = new Nurse[sizeNurseAr_];
} //default constructor

Clinic::Clinic(int sizeNurseAr) :sizeNurseAr_(sizeNurseAr), nbNurses_(0) { //parametized constructor
	arNurses_ = new Nurse[sizeNurseAr_]; //dynamic array of nurses
}

Clinic::~Clinic() { //deconstructor
	delete[] arNurses_;
}

Nurse* Clinic::getNurseAr() { return arNurses_; }

void Clinic::setNurseAr(Nurse* newNurseAr) {
	arNurses_ = newNurseAr;
}