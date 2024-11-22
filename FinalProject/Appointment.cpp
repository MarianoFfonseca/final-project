#include "Appointment.h"

Appointment::Appointment():drID_("N/A"), nrID_("N/A"), ptID_("N/A"), date(Date()){} //default constructor

Appointment::Appointment(std::string drID, std::string nrID, std::string ptID, Date& date):drID_(drID), nrID_(nrID), ptID_(ptID), date(date){} //parametized constructor

