#include <iostream>
#include <string>
using namespace std;
// Defining class for Suspected Patient
// Using Encapsulation and Abstraction Of OOP
//Start of the class

class SuspectedPatient{
    private:
        int Spatient_id;
        string name;
        string phone;
        bool quarantineFor14Days;



    public:
        int getSpatient_id();
        void setSpatient_id(int Spatient_id);
        string getName();
        void setName(string name);
        string getPhone();
        void setPhone(string phone);
        bool getQuarantineFor14Days();
        void setQuarantineFor14Days(bool quarantineFor14Days)
};

int SuspectedPatient::getSpatient_id(){
	return this->Spatient_id;
}
void SuspectedPatient::setSpatient_id(int Spatient_id){
	this->Spatient_id = Spatient_id;
}

string SuspectedPatient::getName() {
	return this->name;
}
void SuspectedPatient::setName(string name) {
	this->name = name;
}
string SuspectedPatient::getPhone() {
	return this->phone;
}
void SuspectedPatient::setPhone(string phone) {
	this->phone = phone;
}
bool SuspectedPatient::getQuarantineFor14Days() {
	return this->quarantineFor14Days;
}
void SuspectedPatient::setQuarantineFor14Days(bool quarantineFor14Days) {
	this->quarantineFor14Days = quarantineFor14Days;
}