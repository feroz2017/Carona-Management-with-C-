#include <iostream>
#include <string>
//#include "RouteSite.h"
using namespace std;
// Defining class for Route which will be taken by patient
// Using Encapsulation and Abstraction Of OOP
//Start of the class
class RouteAddress : public RouteSite{
    private:
        int number;
        string street;
        string city;
    public:
        RouteAddress(int id,string date,string time, 
        string siteName,string city,
         string street, int num): RouteSite(id,date,time,siteName){
             this->number = number;
             this->street = street;
             this->city = city;
         }
        int getNumber();
        void setNumber(int number);
        string getStreet();
        void setStreet(string street);
        string getCity();
        void setCity(string city);
        void setAddress(int number,string street,string city );
        void getAddress();

};
int RouteAddress::getNumber(){
	return this->number;
}
void RouteAddress::setNumber(int number) {
	this->number = number;
}

string RouteAddress::getStreet() {
	return this->street;
}
void RouteAddress::setStreet(string street) {
	this->street = street;
}


string RouteAddress::getCity() {
	return this->city;
}
void RouteAddress::setCity(string city) {
	this->city = city;
}
void RouteAddress::setAddress(int number,string street,string city ){
    this->number = number;
    this->street = street;
    this->city = city;
}
void RouteAddress::getAddress(){
    cout << this->number << this->street << this->city << endl;
}