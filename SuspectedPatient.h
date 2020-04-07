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
    public:
        int getSpatient_id();
        void setSpatient_id(int Spatient_id);
};

int SuspectedPatient::getSpatient_id(){
	return this->Spatient_id;
}
void SuspectedPatient::setSpatient_id(int Spatient_id){
	this->Spatient_id = Spatient_id;
}

