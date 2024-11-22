#include "Date.h"

Date::Date():hour_(0), day_(0), month_(0), year_(0){} //default constructor

Date::Date(int hour, int day, int month, int year):hour_(hour), day_(day), month_(month), year_(year) {} //paramerterized consructor



bool Date::operator== (const Date& other) const { //overloading the == operator
	return (hour_ == other.hour_) && (day_ == other.day_) && (month_ == other.month_) && (year_ == other.year_);
}