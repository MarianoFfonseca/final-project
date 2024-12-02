#include <iostream>
#include<string>
#include <fstream>
#include <cstdlib>
#include "Person.h"
#include "Employee.h"
#include "Nurse.h"
#include "Patient.h"
#include "Doctor.h"
#include "Clinic.h"
#include "Date.h"
#include "Appointment.h"
#include "StoreObjects.h"

using namespace std;

int main()
{
	//////////////////////////////////////////////////////////boilerplate values for param-constructors/////////////////////////////////////////////

	string fName = "Joy";					//person objects
	string lName = "Fernandez";
	string stAddress = "123 Blue Street";
	int	zipCode = 12345;
	string city = "Lynchburg";
	int dayBirth = 21;
	int monthBirth = 4;
	int yearBirth = 1990;
	string SSN = "12345678";
	char gender = 'F';

	double salary = 125000;				//employee objects

	string specialty = "Pediatrics";	//nurse objects
	bool practitioner = true;

	string drSpecialty = "OBGYN";			//doctor objects -- UNFINISHED (Needs Objects for the dynamic array of Appointments.)
	string degree = "PhD";
	string medicalSchool = "Harvard Medical School";
	bool boardCertifited = true;
	int sizePtArray = 5;


	int sizeNurseAr = 5;

	//testing Clinic class param-constructor
	Clinic testClinic(sizeNurseAr);

	//Testing Nurse Param-Constructor
	Nurse test(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, salary, specialty, practitioner);




	//Testing Patient Param-Constructor
	Patient testpt1(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, test.getNurseID());
	Patient testpt2(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, test.getNurseID());
	Patient testpt3(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, test.getNurseID());

	//Testing Doctor Param-Constructor
	Doctor testdr1(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, salary, drSpecialty, degree, medicalSchool, boardCertifited, sizePtArray);
	Doctor testdr2(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, salary, drSpecialty, degree, medicalSchool, boardCertifited, sizePtArray);


	Doctor* docAr = testClinic.getDoctorAr();
	docAr[0] = testdr1;
	docAr[1] = testdr2;

	docAr[0].addPatient(testpt1);
	docAr[0].addPatient(testpt2);
	docAr[0].addPatient(testpt3);

	docAr[1].addPatient(testpt1);
	docAr[1].addPatient(testpt2);
	docAr[1].addPatient(testpt3);

	docAr[0].addNurse(testClinic);
	docAr[0].addNurse(testClinic);
	docAr[0].addNurse(testClinic);
	docAr[1].addNurse(testClinic);
	docAr[1].addNurse(testClinic);

	string path = "C:\\Users\\peelerj952\\Desktop\\FinalProject (1)";

	StoreObjects writeTest(testClinic, path);

	writeTest.writeClinic();
	writeTest.writeDoctor();
	writeTest.writeNurse();
	writeTest.writePatients();

}
