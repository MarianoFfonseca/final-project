#pragma once
#include <string>
#include "Employee.h"
#include "Patient.h"
#include "Nurse.h"
#include "Date.h"
#include "Clinic.h"
#include "Appointment.h"

class Clinic; //forward declaration

using namespace std;
class Doctor :public Employee {
public:
	Doctor(); //default constructor

	Doctor(std::string, std::string, std::string, int, std::string, int, int, int, std::string, char, double, std::string, std::string, std::string, bool, int); //parameterized constructor

	~Doctor(); //deconstructor

	void addPatient(const Patient&); //adds patient to dynamic array of patients
	std::string getDrID(); //getter
	
	Patient* getArPatients(); //returns a pointer to the array of patients

	// function to check if x nurse is free at x time
	bool checkNurse(string idNurse, Date& date);

	void addNurse(Clinic&); //adds a nurse to the nurse array in clinic.

	void delNurse(Clinic&); //removes a nurse from the array in clinc. 

	// Add appointment function
	void addAppointment(string idPatient,int hour, int day, int month, int year,string idNurse);

	// Delete Appointment
	void cancelAppointment(string idPatient);

	void updateAppointment(string idPatient, int hour, int day, int month, int year);

	void PrintAppointments();

private:
	static int drCount_; //used to create the drID
	std::string drTitle_ = "dr"; //used to create the drID
	std::string drID_;
	std::string specialty_;
	std::string degree_;
	std::string medicalSchool_;
	bool boardCertifited_;

	int sizePTArray_;
	Patient* arPatients_;
	int numPt_ = 0;
	//NEEDS DYNAMIC ARRAY OF APPOINTMENTS ----- ADD TO CONSTRUCTOR
	// int nbAppointments_;
	Appointment** arAppointments_;
};