//Student.cpp
#include "Student.h"

//Default constructor
Student::Student() {
    studentName = "Unknown";
    studentAge = 0;
    rollNumber = 0;
    studentGPA = 0.0;
    cout << "Default constructor called." << endl;
}

//Parameterized constructor
Student::Student(string name, int age, int roll, float gpa) {
    studentName = name;
    studentAge = age;
    rollNumber = roll;
    studentGPA = gpa;
    cout << "Parameterized constructor called for " << studentName << "." << endl;
}

//Destructor
Student::~Student() {
    cout << "Destructor called for " << studentName << "." << endl;
}

//Setters
void Student::setName(string& name) { studentName = name; }
void Student::setAge(int& age) { studentAge = age; }
void Student::setRollNumber(int& roll) { rollNumber = roll; }
void Student::setGPA(float& gpa) { studentGPA = gpa; }

//Getters
string Student::getName() const { return studentName; }
int Student::getAge() const { return studentAge; }
int Student::getRollNumber() const { return rollNumber; }
float Student::getGPA() const { return studentGPA; }

//Calculate Grade
string Student::calculateGrade() const {
    if (studentGPA >= 3.5) return "A";
    if (studentGPA >= 3.0) return "B";
    if (studentGPA >= 2.0) return "C";
    return "F";
}

//Show Info
void Student::showStudentInfo() const {
    cout << "Name: " << studentName
        << " | Age: " << studentAge
        << " | Roll No: " << rollNumber
        << " | GPA: " << studentGPA
        << " | Grade: " << calculateGrade()
        << endl;
}