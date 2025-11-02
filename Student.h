#pragma once
//Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>   // <- must be present
using namespace std;

class Student {
private:
    string studentName;
    int studentAge;
    int rollNumber;
    float studentGPA;

public:
    //Default constructor
    Student();
    //Parameterized constructor
    Student(string name, int age, int roll, float gpa);
    //Destructor
    ~Student();

    void setName(string& name);
    void setAge(int& age);
    void setRollNumber(int& roll);
    void setGPA(float& gpa);

    string getName() const;
    int getAge() const;
    int getRollNumber() const;
    float getGPA() const;

    string calculateGrade() const;
    void showStudentInfo() const;
};

#endif