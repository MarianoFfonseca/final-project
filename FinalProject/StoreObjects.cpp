#include "StoreObjects.h"

StoreObjects::StoreObjects(Clinic& clinic, std::string& path) {
	path_ = path;
	clinic_ = clinic;
}

void StoreObjects::writeClinic() {
	std::ofstream file(path_ + "\\clinic.txt");
	if (file.is_open()) {
		file << clinic_.getNbNurses() << std::endl;
		file << clinic_.getDoctorAr()[0].getCapacity() << std::endl;
		file << clinic_.getDoctorAr()[0].getNbPt() << std::endl;
		file << clinic_.getDoctorAr()[1].getCapacity() << std::endl;
		file << clinic_.getDoctorAr()[1].getNbPt() << std::endl;
		//file << dr2_.getCapacity() << std::endl;   ---------- FOR SECOND DOCTOR WHEN ADDED -----------------
		//file << dr2_.getNbPt() << std::endl;
	}
	else {
		std::cout << "Unable to open file" << std::endl;
	}
	file.close();
}

void StoreObjects::writeDoctor() {
	for (int i = 0; i < clinic_.getNbDr(); i++) {
		std::ofstream file(path_ + "\\" + doctortitle + std::to_string(i + 1) + ".txt");
		if (file.is_open()) {
			
			file << clinic_.getDoctorAr()[i].getFirstName() << endl;
			file << clinic_.getDoctorAr()[i].getLastName() << endl;
			file << clinic_.getDoctorAr()[i].getStreetAddress() << endl;
			file << clinic_.getDoctorAr()[i].getZipCode() << endl;
			file << clinic_.getDoctorAr()[i].getCity() << endl;
			file << clinic_.getDoctorAr()[i].getDayBirth() << endl;
			file << clinic_.getDoctorAr()[i].getMonthBirth() << endl;
			file << clinic_.getDoctorAr()[i].getYearBirth() << endl;
			file << clinic_.getDoctorAr()[i].getSSN() << endl;
			file << clinic_.getDoctorAr()[i].getGender() << endl;
			file << clinic_.getDoctorAr()[i].getSalary() << endl;
			file << clinic_.getDoctorAr()[i].getSpecialty() << endl;
			file << clinic_.getDoctorAr()[i].getDegree() << endl;
			file << clinic_.getDoctorAr()[i].getMedicalSchool() << endl;
			file << clinic_.getDoctorAr()[i].getBoardCertifited() << endl;
			file << clinic_.getDoctorAr()[i].getCapacity() << endl;
		}
		else {
			std::cout << "Unable to open file" << std::endl;
		}
		file.close();
	}
}

void StoreObjects::writeNurse() {
	if (clinic_.getNbNurses() > 0) {
		for (int i = 0; i < clinic_.getNbNurses(); i++) {
			std::ofstream file(path_ + "\\" + nursetitle + std::to_string(i + 1) + ".txt");
			if (file.is_open()) {
				file << clinic_.getNurseAr()[i].getFirstName() << endl;
				file << clinic_.getNurseAr()[i].getLastName() << endl;
				file << clinic_.getNurseAr()[i].getStreetAddress() << endl;
				file << clinic_.getNurseAr()[i].getZipCode() << endl;
				file << clinic_.getNurseAr()[i].getCity() << endl;
				file << clinic_.getNurseAr()[i].getDayBirth() << endl;
				file << clinic_.getNurseAr()[i].getMonthBirth() << endl;
				file << clinic_.getNurseAr()[i].getYearBirth() << endl;
				file << clinic_.getNurseAr()[i].getSSN() << endl;
				file << clinic_.getNurseAr()[i].getGender() << endl;
				file << clinic_.getNurseAr()[i].getSalary() << endl;
				file << clinic_.getNurseAr()[i].getSpecialty() << endl;
				file << clinic_.getNurseAr()[i].getPracticioner() << endl;
			}
			else {
				std::cout << "Could not open file." << std::endl;
			}
			file.close();
		}

	}
	else {
		std::cout << "There are no nurses." << endl;
	}
}

void StoreObjects::writePatients() {
	for (int i = 0; i < clinic_.getNbDr(); i++) {
		for (int j = 0; j < clinic_.getDoctorAr()[i].getNbPt(); j++) {
			std::ofstream file(path_ + "\\" + doctortitle + std::to_string(i + 1) + patienttitle + std::to_string(j + 1) + ".txt");
			if (file.is_open()) {
				file << clinic_.getDoctorAr()[i].getArPatients()[j].getFirstName() << endl;
				file << clinic_.getDoctorAr()[i].getArPatients()[j].getFirstName() << endl;
				file << clinic_.getDoctorAr()[i].getArPatients()[j].getLastName() << endl;
				file << clinic_.getDoctorAr()[i].getArPatients()[j].getStreetAddress() << endl;
				file << clinic_.getDoctorAr()[i].getArPatients()[j].getZipCode() << endl;
				file << clinic_.getDoctorAr()[i].getArPatients()[j].getCity() << endl;
				file << clinic_.getDoctorAr()[i].getArPatients()[j].getDayBirth() << endl;
				file << clinic_.getDoctorAr()[i].getArPatients()[j].getMonthBirth() << endl;
				file << clinic_.getDoctorAr()[i].getArPatients()[j].getYearBirth() << endl;
				file << clinic_.getDoctorAr()[i].getArPatients()[j].getSSN() << endl;
				file << clinic_.getDoctorAr()[i].getArPatients()[j].getGender() << endl;
			}
			else {
				std::cout << "Could not open file." << std::endl;
			}
			file.close();
		}
	}
}