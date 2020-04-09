#include <bits/stdc++.h> 
#include <iostream> 
#include <string.h>
#include <fstream>
#include "src/InfectedPatient.h"
#include "src/SuspectedPatient.h"
#include "src/RouteSite.h"
#include "src/RouteAddress.h"
#include "src/Test.h"
int NEWE = 0;
int NEWI = 0;
using namespace std; 
vector <string> commandParser(string command){
	vector <string> tokens; 
      
    // stringstream class check1 
    stringstream check1(command); 
      
    string intermediate; 
      
    // Tokenizing w.r.t. space ' ' 
    while(getline(check1, intermediate, ' ')) 
    { 
        tokens.push_back(intermediate); 
    } 
	return tokens;
}
void addDatatoFile(vector <string> commands, string filename){
	ofstream file;
	file.open(filename.c_str(),ios::app);
	if(file.fail()){
		cout << "There is an error while Opening file " << endl;
	}
	for(int index = 1 ; index < commands.size(); index++ ){
		file << commands[index];
		file << " ";
	}
	file << "\n";
	cout << "New Record added to " << filename <<endl;
	file.close();
}

/*
	Start:
		Storing 	data from files into Memory
*/
void loadData(vector <SuspectedPatient> suspatients,
			vector <InfectedPatient> infPatients,
			vector <RouteAddress> routeAddress,
			vector <RouteSite> routeSite,
			vector <Test> tests){
				/*
					Start:
					Storing data of Infected Patients
				*/
				ifstream file("database/InfectedPatient.txt");
				string data;
				int i = 1;
				while(getline(file,data)){
					vector <string> record = commandParser(data);
					infPatients.push_back(InfectedPatient(atoi(record[0].c_str()),
					record[1],
					record[2],
					record[3],
					record[4],
					record[5],
					record[6],
					record[7],
					atoi(record[8].c_str()),
					record[9],
					atoi(record[10].c_str())));
					i++;	
				}
				file.close();
				/*
					End:
					Storing data of Infected Patients
				*/

				/*
					Start:
					Storing data of Suspected Patients
				*/
				file.open("database/suspectedPatient.txt");
				while(getline(file,data)){
					vector <string> record = commandParser(data);
					suspatients.push_back(SuspectedPatient(atoi(record[0].c_str()),
					record[1],
					record[2],
					record[3]));
					
				}
				file.close();
				/*
					End:
					Storing data of Infected Patients
				*/

				/*
					Start:
					Storing data of Suspected Patients
				*/
				file.open("database/routesite.txt");
				while(getline(file,data)){
					vector <string> record = commandParser(data);
					routeSite.push_back(RouteSite(atoi(record[0].c_str()),
					record[1],
					record[2],
					record[3]));
					
				}
				file.close();
				/*
					End:
					Storing data of Infected Patients
				*/
			/*
					Start:
					Storing data of Suspected Patients
				*/
				file.open("database/routeAddress.txt");
				while(getline(file,data)){
					vector <string> record = commandParser(data);
					routeAddress.push_back(RouteAddress(atoi(record[0].c_str()),
					record[1],
					record[2],
					record[3],
					record[4],
					record[5],
					atoi(record[6].c_str())
					));
					
				}
				file.close();
				
				/*
					End:
					Storing data of Infected Patients
				*/

			/*
					Start:
					Storing data of Suspected Patients
				*/
				file.open("database/tests.txt");
				while(getline(file,data)){
					vector <string> record = commandParser(data);
					bool dummy;
					if(record[4] == "0")
						dummy = false;
					else
					{
							dummy = true;
					}
					tests.push_back(Test(atoi(record[0].c_str()),
					atoi(record[1].c_str()),
					atoi(record[2].c_str()),
					record[3],
					dummy)
					);
					
				}
				file.close();
				
				/*
					End:
					Storing data of Infected Patients
				*/

			}
			/*
				End:
				Storing data from files into Memory
			*/
void clearVectors(vector <SuspectedPatient> suspatients,
			vector <InfectedPatient> infPatients,
			vector <RouteAddress> routeAddress,
			vector <RouteSite> routeSite,
			vector <Test> tests){
				suspatients.clear();
				infPatients.clear();
				routeAddress.clear();
				routeSite.clear();
				tests.clear();
			}
int main(void) 
{ 
	/*Start:
		Declaring Vairables for this applcation
	*/
	string filename = "database/commands.txt";
	string command;
	vector <string> commands; 
	vector <SuspectedPatient> suspatients;
	vector <InfectedPatient> infPatients;
	vector <RouteAddress> routeAddress;
	vector <RouteSite> routeSite;
	vector <Test> tests;
	/*End:
		Declaring Vairables for this applcation
	*/

	loadData(suspatients,infPatients,routeAddress,routeSite,tests);
	NEWE = suspatients.size();
	NEWI = infPatients.size();
	ifstream fcommand(filename.c_str());
	if(fcommand.fail()){
		cout << "There is some error" << endl;
	}
	// Reading command file unitl EOF is reached
	while(getline(fcommand,command)){
		commands = commandParser(command);
		if(commands[0] == "Create-sick"){
			addDatatoFile(commands, "database/InfectedPatient.txt");
			clearVectors(suspatients,infPatients,routeAddress,routeSite,tests);
			loadData(suspatients,infPatients,routeAddress,routeSite,tests);
		}
		else if (commands[0] == "Add-route-site"){
			addDatatoFile(commands, "database/routesite.txt");
			clearVectors(suspatients,infPatients,routeAddress,routeSite,tests);
			loadData(suspatients,infPatients,routeAddress,routeSite,tests);
		}
		else if (commands[0] == "Add-route-address"){
			addDatatoFile(commands, "database/routeAddress.txt");
			clearVectors(suspatients,infPatients,routeAddress,routeSite,tests);
			loadData(suspatients,infPatients,routeAddress,routeSite,tests);
		}
		else if (commands[0] == "Add-sick-encounter"){
			addDatatoFile(commands, "database/suspectedPatient.txt");
			clearVectors(suspatients,infPatients,routeAddress,routeSite,tests);
			loadData(suspatients,infPatients,routeAddress,routeSite,tests);
		}
		else if (commands[0] == "Show-sick-encounter"){
			cout << "list of encounters where the person details were not inserted yet.\n" << endl;
			int dum = NEWE;
			if(dum == suspatients.size()){
				cout << "There are no  New Suspected Patients." << endl;
			}
			else{
				for (;dum < suspatients.size();dum++){
					cout << suspatients[dum].getSpatient_id() << ","<<suspatients[dum].getSpatient_id()<< ","
						<< suspatients[dum].getFirst_name() << "," << suspatients[dum].getLast_name()<< "," << suspatients[dum].getPhone() << endl;
				}
			}
			
		}
		else if (commands[0] == "Update-sick-encounter-details"){
			addDatatoFile(commands, "database/InfectedPatient.txt");
			clearVectors(suspatients,infPatients,routeAddress,routeSite,tests);
			loadData(suspatients,infPatients,routeAddress,routeSite,tests);
		}
		else if (commands[0] == "Show-new-sick"){
			cout << "list of new Infected Persons.\n" << endl;
			int dum = NEWI;
			if(dum == suspatients.size()){
				cout << "There are no  New Infected Patients." << endl;
			}
			else{
				for (;dum < infPatients.size();dum++){
					cout << infPatients[dum].getPatient_id() << "," << infPatients[dum].getFirst_name() << ","<< infPatients[dum].getLast_name() << ","<<infPatients[dum].getPhone()<< endl;
				}
			}
		}
		else if (commands[0] == "Show-stat"){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == "Show-person"){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == "Show-person-route"){
			bool exits = false;
			for(int index = 0; index < routeSite.size() ; index++){
				if(atoi(commands[1].c_str()) == routeSite[index].getId()){
					exits = true;
					cout << routeSite[index].getSiteName() << endl;
				}
			}
			if(!exits){
				for(int index = 0; index < routeSite.size() ; index++){
					if(atoi(commands[1].c_str()) == routeAddress[index].getId()){
						exits = true;
						cout << routeAddress[index].getSiteName() << " " << routeAddress[index].getStreet() << " " << routeAddress[index].getNumber() << endl;
					}
				}
			}
			if(!exits){
				cout <<"Route For this person not exited"<<endl;
			}
		}
		else if (commands[0] == "Show-isolated"){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == "Show-help"){
			cout << "1. Create-sick id firstname lastname birthdate phone mail city street house-number apartment\n\thouse-residents if the same id used more than once,\n\t the details of the last run will override the previous one" << endl;
			cout << "2. Add-route-site id 01/04/2020 10:00 sitename" << endl;
			cout << "3. Add-route-address id 01/04/2020 10:30 sitename city street number" << endl;
			cout << "4. Add-sick-encounter sick-id firstname lastname phone" <<endl;
			cout << "5. Show-sick-encounter show a list of encounters where the person details were not inserted yet,\n\t in the following format: encounterid, sick-id, sick-firstname, sick-lastname, \n\tfirstname lastname phone" << endl;
			cout << "6. Update-sick-encounter -details encounter-id personid firstname lastname birthdate phone mail\n\t city street house-number apartment house-residents if the same encounter-id \n\tused more than once, the details of the last run will override the previous one" << endl;
			cout << "7. Update-lab-test labid testid personid date result if the same labid and testid pairs are\n\t used more than once, the details of the last run will override the previous one"<<endl;
			cout << "8. Show-new-sick will display a list of all sick people who were added since the last run\n\t of this command in the following format: id, firstname, lastname, birthdate, phone, mail,\n\t city, street, housenumber, apartment, house-residents" << endl;
			cout << "9. Show-stat [List of stats separated by , ] stats options – sicks, \n\thealed, isolated, sick-per-city each printed stat will be in a\n\tformat:\n\t** BEGIN STATNAME ** \n\t stat value(s) \n\t ** END STATNAME **" <<endl;
			cout << "10. Show-person personid will display the person details and whether he \n\t is sick or not together with all his/her lab tests in the following \n\t format: id, firstname, lastname, birthdate, phone, mail, city, \n\t street, house-number, apartment, house-residents, source-sick(0 if \n\t unknown) \n\t ** LAB RESULT BEGIN ** \n\t date labid testid res"<<endl;
			cout << "11. Show-person-route personid" << endl;
			cout << "12. Show-sick will display all the sick people in the system in this \n\t format per line: id, firstname, lastname, birthdate, phone, mail, \n\t city, street, house-number, apartment, house-residents, sourcesick(0 if unknown)" <<endl;
			cout << "13. Show-isolated will display all the people in the system that are in \n\t isolation (14 days since they were reported or healed) in this \n\t format per line: id, firstname, lastname, birthdate, phone, mail, \n\t city, street, house-number, apartment, house-residents" << endl;
		}
		else if (commands[0] == "Show-sick"){
			int index = 0;
			for (; index < infPatients.size();index++){
					cout << infPatients[index].getPatient_id() << "," << infPatients[index].getFirst_name() << ","<< infPatients[index].getLast_name() << ","<<infPatients[index].getPhone()<< ","<< infPatients[index].getEmail()<< "," << infPatients[index].getCity() << ",\n"<< infPatients[index].getStreet()<< ","<<infPatients[index].getHouseNum()<<","<<infPatients[index].getNumberofHouseMember()<< endl;
				}
		}
		else if (commands[0] == "Update-lab-test"){
			addDatatoFile(commands, "database/tests.txt");
			clearVectors(suspatients,infPatients,routeAddress,routeSite,tests);
			loadData(suspatients,infPatients,routeAddress,routeSite,tests);
		}
		else{
			cout <<"Invalid Command " << command << endl;
		}
	}
} 

