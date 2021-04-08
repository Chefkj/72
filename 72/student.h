#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
using namespace std;
#include "degree.h"

class Student {
    public:
        void    SetStudentID(string studID);
        string  GetStudentID() const;
        void    PrintStudentID();
        void    SetFirstName(string fName);
        string  GetFirstName() const;
        void    PrintFirstName();
        void    SetLastName(string lName);
        string  GetLastName() const;
        void    PrintLastName();
        void    SetEmailAddress(string eAddress);
        string  GetEmailAddress() const;
        void    PrintEmailAddress();
        void    SetAge(int years);
        int     GetAge() const;
        void    PrintAge();
        void    SetTimeArray(int time1, int time2, int time3);
        int     GetTimeArray() const;
        void    PrintTimeArray();
        void    SetDegreeProgram(DegreeProgram dProgram);
        DegreeProgram  GetDegreeProgram() const;
        string  PrintDegreeProgram() const;
        Student();
        Student(string studID, string fName, string lName, string eAddress, int years, int time1, int time2, int time3, DegreeProgram dProgram);
        void    addStudent(string studID, string fName, string lName, string eAddress, int years, int time1, int time2, int time3, DegreeProgram dProgram);
        void    print();
        int     AverageDaysInCourse() const;
    private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int timeArray[3];
        DegreeProgram degreeProgram;
};
#endif