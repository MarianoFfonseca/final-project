#pragma once
#include <iostream>
#include <string>
#include <fstream>

#include "Clinic.h"
#include "Doctor.h"

class StoreObjects {
public:

	StoreObjects(Clinic&, std::string& path); //constructor

	void writeClinic(); //writes all clinic data to a text file.

	void writeDoctor(); //writes all doctor data to a text file.

	void writeNurse(); //writes all Nurse data to a text file.

	void writePatients(); //writes all the Patient data to a text file.

private:
	string path_;
	string clinic = "clinic";
	string doctortitle = "dr_";
	string nursetitle = "nu_";
	string patienttitle = "pt_";

	Clinic clinic_;

};