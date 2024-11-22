#pragma once
//THIS CLASS IS USED FOR CREATING THE APPOINTMENT CLASS

class Date {
public:
	Date(); //default constructor

	Date(int, int, int, int); //paramaterized constructor

	bool operator==(const Date& other) const; //overloading the == operator

private:
	int hour_;
	int day_;
	int month_;
	int year_;
};