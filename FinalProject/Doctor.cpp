#include <iostream>
#include <istream>
#include "Doctor.h"
#include "Nurse.h"
#include "Appointment.h"
#include "Date.h"
#include "Clinic.h"
#include <string>

using namespace std;
int Doctor::drCount_ = 1; //used to make the ID for doctor

Doctor::Doctor() :Employee() { //default constructor 
	drID_ = "N/A";
	specialty_ = "N/A";
	degree_ = "N/A";
	medicalSchool_ = "N/A";
	boardCertifited_ = 0;
	capacity_ = 0;
	arPatients_ = new Patient[capacity_];
	// new Appointment * [5][8]
	arAppointments_ = new Appointment * [5];

	// For each row, allocate memory for 8 columns
	for (int i = 0; i < 5; i++) {
		arAppointments_[i] = new Appointment[8];
	}
}

Doctor::Doctor(std::string fName, std::string lName, std::string stAddress, int zip, std::string city, int dayBirth, int monthBirth, int yearBirth, std::string sSN, char gender, double salary, std::string specialty, std::string degree, std::string medSchool, bool boardCert, int capacity) :
	Employee(fName, lName, stAddress, zip, city, dayBirth, monthBirth, yearBirth, sSN, gender, salary) { //parameterized constructor

	drID_ = drTitle_ + std::to_string(drCount_); //creates the string for the id
	drCount_++; //increments the count for id num.
	specialty_ = specialty;
	degree_ = degree;
	medicalSchool_ = medSchool;
	boardCertifited_ = boardCert;

	capacity_ = capacity;
	arPatients_ = new Patient[capacity_]; //creates the dynamic array of patients

	arAppointments_ = new Appointment * [5];

	// For each row, allocate memory for 8 columns
	for (int i = 0; i < 5; i++) {
		arAppointments_[i] = new Appointment[8];
	}

}

Doctor::~Doctor() { //deconstructor for dynamic arrays
	delete[] arPatients_; //deallocated memory for patient dynamic array
	//delete[] arAppointments_  -- //deallocates memory for appointment dynamic array. 
}

std::string Doctor::getDrID() { return drID_; } //getter for drID
std::string Doctor::getSpecialty() { return specialty_; }
std::string Doctor::getDegree() { return degree_; }
std::string Doctor::getMedicalSchool() { return medicalSchool_; }
bool Doctor::getBoardCertifited() { return boardCertifited_; }
int Doctor::getCapacity() { return capacity_; }
int Doctor::getNbPt() { return numPt_; }

void Doctor::addPatient(const Patient& patient) { // 
	for (int i = 0; i < numPt_; i++) //checking if the patient is already in the array.
		if (arPatients_[i] == patient) {
			std::cout << "This patient is already assigned to this doctor." << std::endl;
			return;
		}
	if (numPt_ == capacity_) { //resizing the array if it is too small to add a new patient
		int newSize = capacity_ * 2;
		Patient* newAr = new Patient[newSize];
		for (int i = 0; i < numPt_; i++) {
			newAr[i] = arPatients_[i];
		}
		delete[] arPatients_; //deletes the old array
		arPatients_ = newAr; //sets old array to new array
		capacity_ = newSize; //updates array size
	}
	arPatients_[numPt_] = patient; //assigns a new patient to the patient array
	numPt_++; //increments the count of total assigned patients
		
}



Patient* Doctor::getArPatients() { return arPatients_; } //returns a pointer to the patient array



void Doctor::addNurse(Clinic& clinic) {

	Nurse* nurseAr = clinic.getNurseAr();//gets a pointer to the nurse array in Clinic.
	if (clinic.nbNurses_ == clinic.sizeNurseAr_) { //resizing the array if it is too small to add a new patient
		int newSize = clinic.sizeNurseAr_ * 2;
		Nurse* newAr = new Nurse[newSize];
		for (int i = 0; i < clinic.nbNurses_; i++) {
			newAr[i] = nurseAr[i];
		}
		delete[] nurseAr; //deletes the old array
		clinic.setNurseAr(newAr); //sets old array to new array
		clinic.sizeNurseAr_ = newSize; //updates array size
	}

	string fName = "first";					//nurse objects
	string lName = "name";
	string stAddress = "123 lane av";
	int	zipCode = 12345;
	string city = "detroit";
	int dayBirth = 1;
	int monthBirth = 1;
	int yearBirth = 1990;
	string SSN = "12345677";
	char gender = 'M';
	double salary = 10000;
	string specialty = "news";
	char practCheck = 'y';
	bool practitioner = true;

	//cout << "Please enter the first name." << endl;
	//cin >> fName;
	//cout << "Please enter the last name." << endl;
	//cin >> lName;

	//cin.ignore(); //clears left over input to get the address string. 

	//cout << "Please enter the street address." << endl;
	//getline(cin, stAddress);

	//cout << "Please enter the five digit zip code." << endl;
	//cin >> zipCode;

	//cout << "Please enter the city." << endl;
	//cin >> city;

	//cout << "Please enter the day of birth, between 1 and 31." << endl;
	//cin >> dayBirth;

	//cout << "Please enter the month of birth, between 1 and 12." << endl;
	//cin >> monthBirth;

	//cout << "Please enter the year of birth." << endl;
	//cin >> yearBirth;

	//cout << "Please enter the Social Security Number." << endl;
	//cin >> SSN;

	//cout << "Please enter 'M' or 'F' for gender." << endl;
	//cin >> gender;

	//cout << "Please enter the salary." << endl;
	//cin >> salary;

	//cout << "Please enter the specialty." << endl;
	//cin >> specialty;

	//cout << "Are they a nurse practictioner? Y/N" << endl;
	//cin >> practCheck;

	//if (practCheck == 'Y' || practCheck == 'y') {
	//	practitioner = 1;
	//}
	//else
	//	practitioner = 0;




	//adding nurse constructor -- THIS NEEDS TO DONE WITH LOOPS. 
	Nurse NewNurse(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, salary, specialty, practitioner);
	clinic.arNurses_[clinic.nbNurses_] = NewNurse;
	clinic.nbNurses_++;

	
}

void Doctor::delNurse(Clinic& clinic) {
	Nurse* nurseAr = clinic.getNurseAr();//gets a pointer to the nurse array in Clinic.
	
	cout << "Which nurse would you like to remove? " << endl;
	for (int i = 0; i < clinic.nbNurses_; i++) {
		cout << "Nurse # " << i + 1 << ":  " << nurseAr[i].getNurseID() << endl;
	}

	int delOpt_;
	std::cin >> delOpt_;

	if ((delOpt_ > clinic.nbNurses_) || (delOpt_ < 0)) {
		cout << "Invalid Input " << endl;
		return;
	}

	else {
		for (int i = 0; i < clinic.nbNurses_; i++) {
			if (nurseAr[delOpt_ - 1] == nurseAr[i]) {
				for (int j = i; j < clinic.nbNurses_ ; j++) {
					nurseAr[j] = nurseAr[j + 1];
				}
				clinic.setNurseAr(nurseAr);
				clinic.nbNurses_--;
			}
		}
	}

}

// ADDED NEW

bool Doctor::checkNurse(string idNurse, Date& date) {
		// going in each trough 2d array of appointments
		for (int i = 0; i < 5; i++) {
			for (int e = 0; e < 8; e++) {
				// checking if the nurse its and the date its the same
				if (arAppointments_[i][e].getNrId() == idNurse && arAppointments_[i][e].getDate() == date) {
					return false;
				}
			}
		}

	// returing true if we did not find the nurse in a existing appointment that date
	return true;
}

void Doctor::addAppointment(string idPatient, int  hour, int  day, int  month, int  year, string idNurse) {
	// check if the date is picked
	// ??? arAppointments_[day][hour].getNrId() <--- ASK 

	Date appntDate = Date(hour, day, month, year);
	
	if (!arAppointments_[day][hour].getIsAvalible() || !checkNurse(idNurse, appntDate) ){
		cout<< "XXXXXXX - This date is not avilable - XXXXXXXXX" << endl;
		return;

	}
	else {
		arAppointments_[day][hour] = Appointment(drID_, idNurse, idPatient, appntDate);
		arAppointments_[day][hour].setAvalible(false);
		return;
	}
}

void Doctor::cancelAppointment(string idPatient) {
	cout << idPatient << " id patient" << endl;
	// going in each trough 2d array of appointments
	for (int i = 0; i < 5; i++) {
		for (int e = 0; e < 8; e++) {
			// checking if we have an appointment with the patient id
			if (arAppointments_[i][e].getPtId() == idPatient) {
				cout << "Appointment to delete found" << endl;
				// creating a blank appointment
				// cleaning old appointment with the blank one
				arAppointments_[i][e] = Appointment();
				return;
				break;
			}
		}
	}
	cout << "Appointment to delete not found" << endl;
}

void Doctor::PrintAppointments() {
	for (int i = 0; i < 5; i++) {
		for (int e = 0; e < 8; e++) {
			cout << arAppointments_[i][e].getPtId() << endl;
		}
		cout << "- end week -" << endl;
	}

}

void Doctor::updateAppointment(string idPatient, int hour, int day, int month, int year) {
	for (int i = 0; i < 5; i++) {
		for (int e = 0; e < 8; e++) {
			// checking if we have an appointment with the patient id
			if (arAppointments_[i][e].getPtId() == idPatient) {
				cout << "Appointment to delete found" << endl;
				// creating a blank appointment
				// cleaning old appointment with the blank one
				arAppointments_[i][e].setDate(Date(hour, day, month, year));
				return;
				break;
			}
		}
	}

}