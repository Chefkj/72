#include <iostream>
#include <string>
#include <array>
#include <sstream>
#include <vector>
using namespace std;


#include "degree.h"
#include "student.h"
#include "roster.h"


int main() {
    cout << "Scripting and Programming - Applications – C867" << endl;
    cout << "Programming Language: c++" << endl;
    cout << "Student ID: 000977361" << endl;
    cout << "KJ Cowen" << endl;


    Roster classRoster;
    vector<Student> classRosterArray;
    string studentData[] = 
        {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
        "A5,Keith,Cowen,kcowen2@wgu.edu,31,130,40,30,SOFTWARE"}; 

    classRoster.classRosterArrayBuilder(studentData, 5);
    classRoster.printAll();
    classRoster.printInvalidEmails();
    for (int g = 0; g < classRoster.classRosterSize(); g++) {
        classRoster.printAverageDaysInCourse(classRoster.currentObjectStudentID(g));
    }
    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");


    classRoster.add("A6","Bobber","Weave","Someemail@gmail.com",72,28,53,39,NETWORK);


    
    
    


    return 0;
}