#include<string>
#include "Person.h"


Person::Person() :fName_("N/A"), lName_("N/A"), stAddress_("N/A"), zipCode_(0), city_("N/A"), dayBirth_(0), monthBirth_(0), yearBirth_(0), SSN_("N/A"), gender_('N') {} //default constructor

Person::Person(std::string fName, std::string lName, std::string stAddress, int zip, std::string city, int dayBirth, int monthBirth, int yearBirth, std::string sSN, char gender) { //Paramaterized Constructor

	fName_ = fName;
	lName_ = lName;
	stAddress_ = stAddress;
	zipCode_ = zip;
	city_ = city;
	dayBirth_ = dayBirth;
	monthBirth_ = monthBirth;
	yearBirth_ = yearBirth;
	SSN_ = sSN;
	gender_ = gender;

}

std::string Person::getFirstName() { return fName_; }
std::string Person::getLastName() { return lName_; }
std::string Person::getStreetAddress() { return stAddress_; }
int	Person::getZipCode() { return zipCode_; }
std::string Person::getCity() { return city_; }
int Person::getDayBirth() { return dayBirth_; }
int Person::getMonthBirth() { return monthBirth_; }
int Person::getYearBirth() { return yearBirth_; }
std::string Person::getSSN() { return SSN_; }
char Person::getGender() { return gender_; }