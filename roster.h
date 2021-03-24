#pragma once
#ifndef ROSTER_H
#define ROSTER_H
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>
#include "student.h"
#include "degree.h"

using namespace std;


class Roster {
public: 
	// ~ REQUIREMENT E1. an array of pointers that point to an object with the Student class
	Student* classRosterArray[5];

	//constructors
	Roster();

	//cosntructor with parameters
	Roster(int maxSize);

	//do i need a deconstructor?
	~Roster();

	//REQUIREMNET E3a - E3f
	void ParseDataset(string const studentData[], int numStudents);
	void Add(string studentId, string firstName, string lastName, string email, int age, int numDays1, int numDays2, int numDays3, string inputDegree, int i);
	void PrintAll();
	void Remove(string userInputID);
	void AvgCourseDays(string studentId); //calls each student
	void PrintByDegreeProgram(DegreeType inputDegreeType); //calls degree class
	void PrintInvalidEmails();

private:
	//stores the Roster class's size, useful for iterating through loops
	int rosterSize;

};





#endif