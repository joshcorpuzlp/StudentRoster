#pragma once
#include <string>
#include <iostream>
#include "degree.h"
using namespace std;


class Student {
public:

	//~ REQUIREMENT D2 ~
	//setters 
	void SetStudentId(string inputStudentID);
	void SetFirstName(string inputFirstName);
	void SetLastName(string inputLastName);
	void SetEmail(string inputEmail);
	void SetAge(int inputAge);
	void SetNumDaysToCompleteCourse(int inputDay1, int inputDay2, int inputDay3);
	void SetDegree(string inputDegree);
	void SetDegreeType();

	//getters
	
	string GetStudentId() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmail() const;
	int GetAge() const;
	void GetNumDaysToCompleteCourse() const;
	string GetDegree() const;
	DegreeType GetDegreeType() const;

	//getter: functions to print out Student object data members.
	void PrintStudentInfo() const;

	//a constructor function that initialized the default values inside
	Student();
	//overloaded constructor - this one has parameters
	Student(string inputId, string inputfirstName, string inputlastName, string inputEmail,
		int inputAge, int course1, int course2, int course3, string inputDegree);

	//this was placed as a public data member so that the array can be easily accesible by the Roster class functions without needing a getter within the Student class.
	int numDaysToCompleteCourse[3];

private:
	//~ Requirement D1 ~
	string studentId;
	string firstName;
	string lastName;
	string email;
	int age;
	DegreeType degreeProgram;
	string degree;


};
