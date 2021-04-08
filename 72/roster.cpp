#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

#include "student.h"
#include "roster.h"
#include "degree.h"

void Roster::classRosterArrayBuilder(string *arrayOne, int arraySize) {
    Student studentList[10];
    for (int i = 0; i < arraySize; i++){//FIX ME: divide by size of arrayOne for n
        string theThing = arrayOne[i];
        string answer[9];
        stringstream string_stream(theThing);
        int j = 0;
        while(string_stream.good()) {
            string a;
            getline(string_stream, a, ',');
            answer[j] = a;
            j++;
        }
        stringstream answerYears(answer[4]);
        int b = 0;
        answerYears >> b;

        stringstream answerTime1(answer[5]);
        int c = 0;
        answerTime1 >> c;

        stringstream answerTime2(answer[6]);
        int d = 0;
        answerTime2 >> d;

        stringstream answerTime3(answer[7]);
        int e = 0;
        answerTime3 >> e;

        stringstream answerDegree(answer[8]);
        string f = "";
        answerDegree >> f;

        if (f == "NETWORK"){
            dPro = NETWORK;
        }
        else if (f == "SECURITY") {
            dPro = SECURITY;
        }
        else if (f == "SOFTWARE") {
            dPro = SOFTWARE;
        }
        else {
            dPro = SOFTWARE;
        }
        studentList[i].addStudent(answer[0],answer[1],answer[2],answer[3],b,c,d,e,dPro);
        classRosterArray.push_back(studentList[i]);
    }
}
void Roster::add(string studID, string fName, string lName, string eAddress, int years, int time1, int time2, int time3, DegreeProgram dProgram) {
    Student tempList;
    tempList.addStudent(studID, fName, lName, eAddress, years, time1, time2, time3, dProgram);
    classRosterArray.push_back(tempList);
}
void Roster::printAll() {
    int i = 0;
    for (i = 0; i < classRosterArray.size(); i++) {
        classRosterArray[i].print();
    }
}
int Roster::classRosterSize() const {
    return classRosterArray.size();
}
void Roster::remove(string studID) {//FIX ME: Add not found
    int i = 0;
    int counter = 0;
    for (i = 0; i < classRosterArray.size(); i++) {
        
        if (classRosterArray[i].GetStudentID() == studID) {
            classRosterArray.erase(classRosterArray.begin() + i);
            counter++;
        }
    }
    if (counter == 0) {
        cout << "Such a student with this ID was not found." << endl;
    }
}

void Roster::printInvalidEmails() {
    cout << "Invalid Email Addresses:" << endl;
    int i = 0;
    bool beginsDigit = false;
    bool endsDigit = false;
    bool containsSpaces = false;
    bool hasAtSign = false;
    bool hasPeriod = false;
    string emailHolder;
    for (i = 0; i < classRosterArray.size(); i++) {
        emailHolder = classRosterArray[i].GetEmailAddress();
        if (emailHolder.find(' ') != std::string::npos) {
            containsSpaces = true;
        }
        if (isdigit(emailHolder[0])) {
            beginsDigit = true;
        }
        int length = emailHolder.length();
        if (isdigit(emailHolder[length])) {
            endsDigit = true;
        }
        if (emailHolder.find('@') != std::string::npos) {
            hasAtSign = true;
        }
        if (emailHolder.find('.') != std::string::npos) {
            hasPeriod = true;
        }
        if (beginsDigit || containsSpaces || endsDigit || !hasAtSign || !hasPeriod) {
            cout << classRosterArray[i].GetEmailAddress() << endl;
        }
        beginsDigit = false;
        endsDigit = false;
        containsSpaces = false;
        hasAtSign = false;
        hasPeriod = false;
    }
}
void Roster::printAverageDaysInCourse(string studID) {
    for (int i = 0; i < classRosterArray.size(); i++) {
        
        if (studID == classRosterArray[i].GetStudentID()) {
            cout << "Average for " << classRosterArray[i].GetFirstName() << ": " << classRosterArray[i].AverageDaysInCourse() << endl;
        }
    }    
}
string Roster::currentObjectStudentID(int w) const {
    return classRosterArray[w].GetStudentID();
}
void Roster::printByDegreeProgram(DegreeProgram dPro) {
    for (int i = 0; i < classRosterArray.size(); i++) {
        
        if (dPro == classRosterArray[i].GetDegreeProgram()) {
            classRosterArray[i].print();
        }
    }
}
Roster::Roster() {
    vector<Student> classRosterArray;
    Student* studentList = new Student[10];
}
Roster::~Roster() {
    cout << "Destructor Called" << endl;
}
