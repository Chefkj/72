#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "student.h"
#include "degree.h"

class Roster {
    public:
        void    classRosterArrayBuilder(string *arrayOne, int arraySize);
        void    printAll();
        Roster();
        ~Roster();
        void    SetStudent(Student stud);
        void    add(string studID, string fName, string lName, string eAddress, int years, int time1, int time2, int time3, DegreeProgram dProgram);
        void    remove(string studID);
        void    printInvalidEmails();
        void    printAverageDaysInCourse(string studID);
        int     classRosterSize() const;
        string  currentObjectStudentID(int w) const;
        void    printByDegreeProgram(DegreeProgram dPro);
    private:
        vector<Student> classRosterArray;
        DegreeProgram dPro;
        string studID;
        Student tempList;
};

#endif