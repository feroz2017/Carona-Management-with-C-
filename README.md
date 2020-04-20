# Carona-Management-with-C++
                          Coronavirus monitoring management system
As part of the fight against the coronavirus, the Ministry of Health contacted you to
develop an information system to manage the surveillance of coronavirus patients.
The system will allow a nurse in the Ministry of Health to add verified infected
patients and record an interview with them. During the interview, The nurse will input
the patient details (ID number, first name, last name, birthdate, phone, email, city,
street, apartment and number of souls living in his home).
Then, the nurse will input the route the patient has taken. Each station in the route
the nurse will input the date, time and the name of the location or specific address
(city, street and number) where the patient visited.
Then, the nurse will input a list of suspects for infection (name and phone) and the
system will mark that they have entered to a 14 days quarantine.
The nurse will be able to see all the suspects for infection who not yet contacted
them and will make contact with them in order to complete their details as in the
process of inputting the details of verified infected patient.
In the list of the suspects for infection there will be next to each suspect one-value
single-value ID for tracking.
The system will also allow the lab worker in the test lab to input the test result on
patients or suspects for infection in the system (Lab ID, test Id, patient Id, date of test
and test result – positive\negative).
Each suspect for infection which his test is positive will enter to the list of patients
who need to be interviewed by a nurse so the nurse will be able to contact them.
For each suspect for infection who became a verified infected patient you need to
mark if he became infected by coming in close contact with another verified infected
patient.
The system will be able to show statistics on the patients in the system – the number
of verified infected patients, number of patients healed, number of people in
quarantine, percentage of verified infected per city.
This console app needs to be able to input commands file (each line in the file will be
a command).
Follow is a description and structure of the commands:
1. Create-sick id firstname lastname birthdate phone mail city street
house-number apartment house-residents if the same id used more than
once, the details of the last run will override the previous one
2. Add-route-site id 01/04/2020 10:00 sitename
3. Add-route-address id 01/04/2020 10:30 sitename city street number
4. Add-sick-encounter sick-id firstname lastname phone
5. Show-sick-encounter show a list of encounters where the person
details were not inserted yet, in the following format: encounterid, sick-id, sick-firstname, sick-lastname, firstname lastname phone
6. Update-sick-encounter -details encounter-id personid firstname
lastname birthdate phone mail city street house-number apartment
house-residents if the same encounter-id used more than once, the
details of the last run will override the previous one
7. Update-lab-test labid testid personid date result if the same labid
and testid pairs are used more than once, the details of the last
run will override the previous one
8. Show-new-sick will display a list of all sick people who were added
since the last run of this command in the following format: id,
firstname, lastname, birthdate, phone, mail, city, street, housenumber, apartment, house-residents
9. Show-stat [List of stats separated by , ] stats options – sicks,
healed, isolated, sick-per-city each printed stat will be in a
format:
** BEGIN STATNAME **
stat value(s)
** END STATNAME **
10. Show-person personid will display the person details and whether he
is sick or not together with all his/her lab tests in the following
format: id, firstname, lastname, birthdate, phone, mail, city,
street, house-number, apartment, house-residents, source-sick(0 if
unknown)
** LAB RESULT BEGIN **
date labid testid result
** LAB RESULT END **
11. Show-person-route personid
12. Show-sick will display all the sick people in the system in this
format per line: id, firstname, lastname, birthdate, phone, mail,
city, street, house-number, apartment, house-residents, sourcesick(0 if unknown)
13. Show-isolated will display all the people in the system that are in
isolation (14 days since they were reported or healed) in this
format per line: id, firstname, lastname, birthdate, phone, mail,
city, street, house-number, apartment, house-residents
14. Show-help print the command list and their format
Important notes:
• You must use the SOLID principles as well of the Object-Oriented principles.
• You must use the correct Design Patterns (Write which design patterns you
used)
