#include <iostream>
#include <string>
using namespace std;
// Defining class for Address
// Using Encapsulation and Abstraction Of OOP
//Start of the class
class Address{
    private:
        int number;
        string street;
        string city;
    public:
        int getNumber();
        void setNumber(int number);
        string getStreet();
        void setStreet(string street);
        string getCity();
        void setCity(string city);
        void setAddress(int number,string street,string city );
        void getAddress();

};
int Address::getNumber(){
	return this->number;
}
void Address::setNumber(int number) {
	this->number = number;
}

string Address::getStreet() {
	return this->street;
}
void Address::setStreet(string street) {
	this->street = street;
}


string Address::getCity() {
	return this->city;
}
void Address::setCity(string city) {
	this->city = city;
}
void Address::setAddress(int number,string street,string city ){
    this->number = number;
    this->street = street;
    this->city = city;
}
void Address::getAddress(){
    cout << this->number << this->street << this->city << endl;
}