#pragma once
#include "Date.h"
#include <string>

using namespace std;
class Appointment {
public:
	Appointment();

	Appointment(std::string, std::string, std::string, Date&);

	string getNrId() { return nrID_; };
	string getPtId() { return ptID_; };
	Date getDate() { return date; }
	bool getIsAvalible() {return isAvalible_;}
	void setAvalible(bool v) { isAvalible_ = v; }
	void setDate(Date nwDate) { date = nwDate; }

private:
	std::string drID_;
	std::string nrID_;
	std::string ptID_;
	Date date;
	bool isAvalible_ = true;

};