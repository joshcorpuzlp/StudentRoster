#include <iostream>
#include <string>
#include <iomanip>
#include "student.h"

using namespace std;


//Requirement D1 - D2
//remember to move it to student.h and student.cpp

//create function definitions


//setters that input the studentId, firstName, lastName, email, and age
void Student::SetStudentId(string inputStudentID) {
		studentId = inputStudentID;
	return;
}

void Student::SetFirstName(string inputFirstName) {
	firstName = inputFirstName;

	return;
}

void Student::SetLastName(string inputLastName) {
	lastName = inputLastName;

	return;
}

void Student::SetEmail(string inputEmail) {
	email = inputEmail;

	return;
}

void Student::SetAge(int inputAge) {
	age = inputAge;

	return;
}


//setter function used to store an array of the number of days it takes to complete a course
void Student::SetNumDaysToCompleteCourse(int inputDay1, int inputDay2, int inputDay3) {
	numDaysToCompleteCourse[0] = inputDay1;
	numDaysToCompleteCourse[1] = inputDay2;
	numDaysToCompleteCourse[2] = inputDay3;
	return;
}

//setter function used to take in the string input.
void Student::SetDegree(string inputDegree) {
	degree = inputDegree;
	return;
}

//setter function that converts the string within degree into an enum
void Student::SetDegreeType() {
	if (degree == "SECURITY") {
		degreeProgram = SECURITY;
	}
	else if (degree == "NETWORK") {
		degreeProgram = NETWORK;
	}
	else if (degree == "SOFTWARE") {
		degreeProgram = SOFTWARE;
	}


	return;
}



/*
The following are the getter functions used to input values into 
the private data member within the Student class.
*/
string Student::GetStudentId() const {
	return studentId;
}

string Student::GetFirstName() const {
	return firstName;
}

string Student::GetLastName() const {
	return lastName;
}

string Student::GetEmail() const {
	return email;
}

int Student::GetAge() const {
	return age;
}

string Student::GetDegree() const {
	return degree;
}

DegreeType Student::GetDegreeType() const {
	return degreeProgram;
}

void Student::GetNumDaysToCompleteCourse() const {
	cout << right << "(" << numDaysToCompleteCourse[0] << ", " << numDaysToCompleteCourse[1] << ", "
		<< numDaysToCompleteCourse[2] << ")";

	return;
}

//getter/accessor function used to print out all the Student data by calling the other getter functions
void Student::PrintStudentInfo() const{
	cout << left << setw(12) << GetStudentId() 
		<< setw(15) << GetFirstName() << setw(15)
		<< GetLastName() << setw(25) << GetEmail() 
		<< setw(5) << GetAge();
	GetNumDaysToCompleteCourse(); cout << setw(23) << GetDegree();
	cout << endl;

	return;
}

//constructor function
Student::Student() {
	studentId = "00";
	firstName = "NONE";
	lastName = "NONE";
	email = "NONE";
	age = 0;
	numDaysToCompleteCourse[0] = 0;
	numDaysToCompleteCourse[1] = 0;
	numDaysToCompleteCourse[2] = 0;
	degree = "NONE";

}

//2nd constructor that takes parameters
Student::Student(string inputId, string inputFirstName, string inputLastName, string inputEmail,
	int inputAge, int course1, int course2, int course3, string inputDegree) {
	studentId = inputId;
	firstName = inputFirstName;
	lastName = inputLastName;
	email = inputEmail;
	age = inputAge;
	numDaysToCompleteCourse[0] = course1;
	numDaysToCompleteCourse[1] = course2;
	numDaysToCompleteCourse[2] = course3;
	degree = inputDegree;
	SetDegreeType();
};

