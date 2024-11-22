#include <iostream>
#include<string>
#include "Person.h"
#include "Employee.h"
#include "Nurse.h"
#include "Patient.h"
#include "Doctor.h"
#include "Clinic.h"
#include "Date.h"
#include "Appointment.h"

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

	////Testing Nurse Param-Constructor
	//Nurse test(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, salary, specialty, practitioner);
	//Nurse test2(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, salary, specialty, practitioner);
	//Nurse test3(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, salary, specialty, practitioner);

	

	////Testing Patient Param-Constructor
	//Patient testpt1(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, test.getNurseID());
	//Patient testpt2(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, test2.getNurseID());
	//Patient testpt3(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, test3.getNurseID());


	//Testing Doctor Param-Constructor
	Doctor testdr1(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, salary, drSpecialty, degree, medicalSchool, boardCertifited, sizePtArray);
	Doctor testdr2(fName, lName, stAddress, zipCode, city, dayBirth, monthBirth, yearBirth, SSN, gender, salary, drSpecialty, degree, medicalSchool, boardCertifited, sizePtArray);


	//testing Clinic class param-constructor
	Clinic testClinic(sizeNurseAr);

	
	testdr1.addNurse(testClinic);
	testdr1.addNurse(testClinic);
	testdr1.addNurse(testClinic);


	Nurse* testNurseAr = testClinic.getNurseAr();

	cout << "This nurse is " << testNurseAr[0].getNurseID() << endl;
	cout << "This nurse is " << testNurseAr[1].getNurseID() << endl;
	cout << "This nurse is " << testNurseAr[2].getNurseID() << endl;


	testdr1.delNurse(testClinic);

	cout << "This nurse is " << testNurseAr[0].getNurseID() << endl;
	cout << "This nurse is " << testNurseAr[1].getNurseID() << endl;
	cout << "This nurse is " << testNurseAr[2].getNurseID() << endl;

	//testing class Date methods

	int hour1 = 10;
	int day1 = 5;
	int month1 = 10;
	int year1 = 1990;

	int hour2 = 11;
	int day2 = 23;
	int month2 = 11;
	int year2 = 1992;

	Date testDate(hour1, day1, month1, year1);
	Date testDate2(hour1, day1, month1, year1);
	Date testDate3(hour2, day2, month2, year2);


	//// CHECKING check nurse function
	//bool isNurseFree = testdr1.checkNurse(test.getNurseID(), testDate);
	//if (isNurseFree) {
	//	cout << "the nurse its free " << endl;
	//}

	//// TESTING add appointment
	//testdr1.addAppointment(testpt1.getPtID(), 4, 2, 2, 2024, test.getNurseID());
	//cout << "appontiment added" << endl;
	//
	//// TESTING add appointment ERROR
	//testdr1.addAppointment(testpt1.getPtID(), 4, 2, 2, 2024, test.getNurseID());
	//cout << "appontiment added ERROR TEST" << endl;
	//
	//// TESTING deleting appointmnet 
	//testdr1.cancelAppointment(testpt1.getPtID());
	//cout << "appontiment canceled" << endl;
	////
	//testdr1.addAppointment(testpt1.getPtID(), 4, 2, 2, 2024, test.getNurseID());
	//cout << "appontiment added once more" << endl;

	//cout << "===============" << endl;
	//testdr1.PrintAppointments();

}

