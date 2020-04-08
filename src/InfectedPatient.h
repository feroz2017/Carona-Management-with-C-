#include <iostream>
#include <string>
using namespace std;
// Defining class for Infected Patient
// Using Encapsulation and Abstraction Of OOP
//Start of the class
class InfectedPatient{
    /*
        Private Members of this class
    */
    private:
        int Ipatient_id;
        string first_name;
        string last_name;
        string birthday;
        string phone;
        string email;
        string apartment;
        string street;
        int houseNum;
        int NumberofHouseMember;
        string city;
    /*
        Their Getter and Setter Methods 
    */
    public:
        InfectedPatient(int Ipatient_id,
        string first_name,
        string last_name,
        string birthday,
        string phone,
        string email,
        string city,
        string street,
        int houseNum,
        string apartment,
        int NumberofHouseMember){
                 this->Ipatient_id = Ipatient_id;
        this->first_name= first_name;
        this->last_name = last_name;
        this->birthday = birthday;
        this->phone =  phone;
        this->email = email;
        this->apartment = apartment;
        this->street = street;
        this->houseNum = houseNum;
        this->NumberofHouseMember = NumberofHouseMember;
        this->city = city;
        }
        int getHouseNum(); 
        void setHouseNum(int houseNum);
        string getFirst_name();
        void setFirst_name(string first_name);
        string getLast_name();
        void setLast_name(string last_name);
        string getBirthday();
        void setBirthday(string birthday);
        string getPhone();
        void setPhone(string phone); 
        string getEmail();
        void setEmail(string email);
        string getCity();
        void setCity(string city);
        string getStreet();
        void setStreet(string street);
        string getApartment();
        void setApartment(string apartment);
        int getNumberofHouseMember();
        void setNumberofHouseMember(int NumberofHouseMember);
         int getPatient_id();
          void setPatient_id(int patient_id); 

};

 string InfectedPatient::getFirst_name() {
        	return this->first_name;
    }
void InfectedPatient::setFirst_name(string first_name) {
        	this->first_name = first_name;
        }


string InfectedPatient::getLast_name() {
        	return this->last_name;
        }
void InfectedPatient::setLast_name(string last_name) {
        	this->last_name = last_name;
        }
        

string InfectedPatient::getBirthday() {
        	return this->birthday;
        }
void InfectedPatient::setBirthday(string birthday) {
        	this->birthday = birthday;
        }

string InfectedPatient::getPhone() {
        	return this->phone;
        }
void InfectedPatient::setPhone(string phone) {
        	this->phone = phone;
        }

string InfectedPatient::getEmail() {
        	return this->email;
        }
void InfectedPatient::setEmail(string email) {
        	this->email = email;
        }


string InfectedPatient::getCity() {
        	return this->city;
        }
void InfectedPatient::setCity(string city) {
        	this->city = city;
        }

string InfectedPatient::getStreet() {
        	return this->street;
        }
void InfectedPatient::setStreet(string street) {
        	this->street = street;
        }


string InfectedPatient::getApartment() {
        	return this->apartment;
        }
void InfectedPatient::setApartment(string apartment) {
        	this->apartment = apartment;
        }
       


int InfectedPatient::getNumberofHouseMember() {
        	return this->NumberofHouseMember;
        }
void InfectedPatient::setNumberofHouseMember(int NumberofHouseMember) {
        	this->NumberofHouseMember = NumberofHouseMember;
        }

int InfectedPatient::getPatient_id() 
{
 	return this->Ipatient_id;
}
void InfectedPatient::setPatient_id(int patient_id)
{
 	this->Ipatient_id= patient_id;
}
int InfectedPatient::getHouseNum() {
	return this->houseNum;
}
void InfectedPatient::setHouseNum(int houseNum) {
	this->houseNum = houseNum;
}

// End of the class