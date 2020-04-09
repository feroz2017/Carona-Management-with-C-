#include <iostream>
#include <string>
using namespace std;
// Defining class for Suspected Patient
// Using Encapsulation and Abstraction Of OOP
//Start of the class

class Test{
    private:
        int lab_id;
        int test_id;
        int Tpatient_id;
        string date_of_test;
        bool test_result;// – positive\negative => 1/0 OR true/false;
    public:
        Test(int lab_id,
        int test_id,
        int Tpatient_id,
        string date_of_test,
        bool test_result){

            this->lab_id = lab_id;
        this->test_id = test_id;
        this->Tpatient_id = Tpatient_id;
        this->date_of_test = date_of_test;
        this->test_result = test_result;

        }
        int getLab_id();
        void setLab_id(int lab_id);
        int getTest_id();
        void setTest_id(int test_id);
        int getTpatient_id();
        void setTpatient_id(int Tpatient_id);
        string getDate_of_test();
        void setDate_of_test(string date_of_test);
        bool getTest_result();
        void setTest_result(bool test_result);

};
int Test::getLab_id() {
	return this->lab_id;
}
void Test::setLab_id(int lab_id) {
	this->lab_id = lab_id;
}
int Test::getTest_id() {
	return this->test_id;
}
void Test::setTest_id(int test_id) {
	this->test_id = test_id;
}
int Test::getTpatient_id() {
	return this->Tpatient_id;
}
void Test::setTpatient_id(int Tpatient_id) {
	this->Tpatient_id = Tpatient_id;
}
string Test::getDate_of_test() {
        	return this->date_of_test;
}
void Test::setDate_of_test(string date_of_test) {
        	this->date_of_test = date_of_test;
}
bool Test::getTest_result() {
	return this->test_result;
}
void Test::setTest_result(bool test_result) {
	this->test_result = test_result;
}