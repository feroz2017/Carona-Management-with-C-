#include <iostream>
#include <string>
#include "address.h"
using namespace std;
// Defining class for Route which will be taken by patient
// Using Encapsulation and Abstraction Of OOP
//Start of the class
class Route{
    private:
        string date; // For simplicity I am using date as a input in string 
        string time; // For simplicity I am using time as a input in string
        Address address;
    public:
        void setDate(string date);
        string getDate();
        string getTime();
        void setTime(string time);
        void getAddress();
        void setAddress(int number,string street,string city);
};
string Route::getDate() {
    	return this->date;
    }
void Route::setDate(string date) {
    	this->date = date;
    }
string Route::getTime() {
	return this->time;
}
void Route::setTime(string time) {
	this->time = time;
}


void Route::getAddress() {
	return this->address.getAddress();
}
void Route::setAddress(int number,string street,string city) {
	this->address.setAddress(number,street,city);
}