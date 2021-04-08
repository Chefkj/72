#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "student.h"
#include "degree.h"

void Student::SetStudentID(string studID) {
    studentID = studID;
    return;
}
string Student::GetStudentID() const {
    return studentID;
}
void Student::PrintStudentID() {
    cout << studentID << endl;
}
void Student::SetFirstName(string fName) {
    firstName = fName;
    return;
}
string Student::GetFirstName() const {
    return firstName;
}
void Student::PrintFirstName() {
    cout << firstName << endl;
}
void Student::SetLastName(string lName) {
    lastName = lName;
}
string Student::GetLastName() const {
    return lastName;
}
void Student::PrintLastName() {
    cout << lastName << endl;
}
void Student::SetEmailAddress(string eAddress) {
    emailAddress = eAddress;
}
string Student::GetEmailAddress() const {
    return emailAddress;
}
void Student::PrintEmailAddress() {
    cout << emailAddress << endl;
}
void Student::SetAge(int years) {
    age = years;
}
int Student::GetAge() const {
    return age;
}
void Student::PrintAge() {
    cout << age << endl;
}
void Student::SetTimeArray(int time1, int time2, int time3) {
    timeArray[0] = time1;
    timeArray[1] = time2;
    timeArray[2] = time3;
}
int Student::GetTimeArray() const {
    return timeArray[0];
    return timeArray[1];
    return timeArray[2];
}
void Student::PrintTimeArray() {
    cout << timeArray[0] << ", " << timeArray[1] << ", " << timeArray[2] << endl;
}
void Student::SetDegreeProgram(DegreeProgram dProgram) {
    if (dProgram == 0) {
        degreeProgram = SECURITY;
    }
    else if (dProgram == 1) {
        degreeProgram = NETWORK;
    }
    else if (dProgram == 2) {
        degreeProgram = SOFTWARE;
    }
    else {
    }
}
DegreeProgram Student::GetDegreeProgram() const{
    if (degreeProgram == 0) {
        return SECURITY;
    }
    else if (degreeProgram == 1) {
        return NETWORK;
    }
    else if (degreeProgram == 2) {
        return SOFTWARE;
    }
    else {
        return SOFTWARE;
    }
}
string Student::PrintDegreeProgram() const {
    if (degreeProgram == 0) {
        return "SECURITY";
    }
    else if (degreeProgram == 1) {
        return "NETWORK";
    }
    else if (degreeProgram == 2) {
        return "SOFTWARE";
    }
    else {
        return "NAN";
    }
}
Student::Student() {
    studentID = "";
    firstName = "John";
    lastName = "Smith";
    emailAddress = "John1989@gm ail.com";
    age = 20;
    timeArray[0] = 30;
    timeArray[1] = 35;
    timeArray[2] = 40;
    degreeProgram = SECURITY;
    return;
} 
Student::Student(string studID, string fName, string lName, string eAddress, int years, int time1, int time2, int time3, DegreeProgram dProgram) {
    studentID = studID;
    firstName = fName;
    lastName = lName;
    emailAddress = eAddress;
    age = years;
    timeArray[0] = time1;
    timeArray[1] = time2;
    timeArray[2] = time3;
    degreeProgram = dProgram;
    return;
}
void Student::print() {
    string printVal = PrintDegreeProgram();
    cout << studentID << "\t" << "First Name: " << firstName << "\t" << "Last Name: " << lastName << "\t" << "Age: " << age << "\t" << "daysInCourse: {" << timeArray[0] << ", " << timeArray[1] << ", " << timeArray[2] << "}" << "\t" << "Degree Program: " << printVal << "." << endl;
    return;
}
int Student::AverageDaysInCourse() const{
    int totalTime = 0;
    for (int i = 0; i < 3; i++) {
        totalTime = totalTime + timeArray[i];
    }
    return totalTime/3;
}
void    Student::addStudent(string studID, string fName, string lName, string eAddress, int years, int time1, int time2, int time3, DegreeProgram dProgram) {
    SetStudentID(studID);
    SetFirstName(fName);
    SetLastName(lName);
    SetEmailAddress(eAddress);
    SetAge(years);
    SetTimeArray(time1, time2, time3);
    SetDegreeProgram(dProgram);
}