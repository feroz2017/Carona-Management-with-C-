#include <iostream>
#include <string>
using namespace std;
// Defining class for Route which will be taken by patient
// Using Encapsulation and Abstraction Of OOP
//Start of the class
class RouteSite{
    private:
        int id;
        string date; // For simplicity I am using date as a input in string 
        string time; // For simplicity I am using time as a input in string
        string siteName;
    public:
        RouteSite(int id,string date,string time, string siteName){
            this->id = id;
            this->date = date;
            this->time = time;
            this->siteName = siteName;
        }
        void setDate(string date);
        string getDate();
        string getTime();
        void setTime(string time);
        string getSiteName();
        void setSiteName(string siteName);
        int getId();
        void setId(int id);
};
string RouteSite::getDate() {
    	return this->date;
    }
void RouteSite::setDate(string date) {
    	this->date = date;
}
string RouteSite::getTime() {
	return this->time;
}
void RouteSite::setTime(string time) {
	this->time = time;
}
string RouteSite::getSiteName() {
        	return this->siteName;
        }
void RouteSite::setSiteName(string siteName) {
        	this->siteName = siteName;
        }
int RouteSite::getId() {
	return this->id;
}
void RouteSite::setId(int id) {
	this->id = id;
}