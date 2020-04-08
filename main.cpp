#include <bits/stdc++.h> 
#include <iostream> 
#include <string.h>
#include <fstream>
#include "src/InfectedPatient.h"
#include "src/SuspectedPatient.h"
#include "src/Route.h"
#include "src/Test.h"
#define MAX 100
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
	file.close();
}
/*
	Start:
		Storing 	data from files into Memory
*/
void loadData(vector <SuspectedPatient> suspatients,
			vector <InfectedPatient> infPatients,
			vector <Route> routesite,
			vector <Route> routeAddress,
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

			}
			/*
				End:
				Storing data from files into Memory
			*/
void storeData(vector <SuspectedPatient> suspatients,
			vector <InfectedPatient> infPatients,
			vector <Route> routes,
			vector <Test> tests);
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
	
	vector <Route> routes;
	vector <Test> tests;
	/*End:
		Declaring Vairables for this applcation
	*/
				cout << "yes0" << endl;

	loadData(suspatients,infPatients,routes,tests);
	ifstream fcommand(filename.c_str());
	if(fcommand.fail()){
		cout << "There is some error" << endl;
	}
	// Reading command file unitl EOF is reached
	while(getline(fcommand,command)){
		commands = commandParser(command);
		if(commands[0] == "Create-sick"){
			//addDatatoFile(commands, "database/InfectedPatient.txt");
		}
		else if (commands[0] == "Add-route-site"){
		//	addDatatoFile(commands, "database/routesite.txt");
		}
		else if (commands[0] == "Add-route-address"){
		//	addDatatoFile(commands, "database/routeAddress.txt");
		}
		else if (commands[0] == "Add-sick-encounter"){
			addDatatoFile(commands, "database/suspectedPatient.txt");
		}
		else if (commands[0] == "Show-sick-encounter"){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == "Update-sick-encounter-details"){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == "Show-new-sick"){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == "Show-stat"){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == "Show-person"){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == "Show-person-route"){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == "Show-isolated"){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == " Show-help "){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == "Show-sick"){
			cout << "Route Address" << endl;
		}
		else if (commands[0] == "Update-lab-test"){
			cout << "Route Address" << endl;
		}
		
		else{
			cout <<"No" << endl;
		}
	}
} 

