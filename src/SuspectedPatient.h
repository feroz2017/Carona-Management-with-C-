#include <iostream>
#include <string>
using namespace std;
// Defining class for Suspected Patient
// Using Encapsulation and Abstraction Of OOP
//Start of the class

class SuspectedPatient{
    private:
        int Spatient_id;
        string first_name;
        string last_name;
        string phone;
        bool quarantineFor14Days;
        bool didContact; //  nurse will be able to see all the suspects for infection who not yet contacted them
    public:
        SuspectedPatient(int Spatient_id,
        string first_name,
        string last_name,
        string phone){
            this->Spatient_id=Spatient_id;
            this->first_name = first_name;
            this->last_name = last_name;
            this->phone = phone;
            this->quarantineFor14Days = true;
            this->didContact = false;
        }
        int getSpatient_id();
        void setSpatient_id(int Spatient_id);
        string getFirst_name();
        void setFirst_name(string first_name);
        string getLast_name();
        void setLast_name(string last_name);
        string getBirthday();
        string getPhone();
        void setPhone(string phone);
        bool getQuarantineFor14Days();
        void setQuarantineFor14Days(bool quarantineFor14Days);
        bool getDidContact();
        void setDidContact(bool didContact);
};

int SuspectedPatient::getSpatient_id(){
	return this->Spatient_id;
}
void SuspectedPatient::setSpatient_id(int Spatient_id){
	this->Spatient_id = Spatient_id;
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

bool SuspectedPatient::getDidContact() {
	return this->didContact;
}
void SuspectedPatient::setDidContact(bool didContact) {
	this->didContact = didContact;
}
string SuspectedPatient::getFirst_name() {
        	return this->first_name;
    }
void SuspectedPatient::setFirst_name(string first_name) {
        	this->first_name = first_name;
        }


string SuspectedPatient::getLast_name() {
        	return this->last_name;
        }
void SuspectedPatient::setLast_name(string last_name) {
        	this->last_name = last_name;
        }
        
// End of the class