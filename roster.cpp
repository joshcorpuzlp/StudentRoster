#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <iomanip>
#include "student.h"
#include "roster.h"


//initialize constructor
Roster::Roster() {
	rosterSize = 0;
}

//constructor with parameters that initializes the size of a Roster object.
Roster::Roster(int rosterSize) {
	this->rosterSize = rosterSize;
}


void Roster::ParseDataset(string const studentData[], int numStudents) {
	for (int i = 0; i < numStudents; i++) {
		string my_str = studentData[i];
		vector<string> result;
		stringstream s_stream(my_str); //create string stream from the string
		
		while (s_stream.good()) {
			string substr;
			getline(s_stream, substr, ',');
			result.push_back(substr);
		}
		Add(result.at(0), result.at(1), result.at(2), result.at(3), stoi(result.at(4)), stoi(result.at(5)), stoi(result.at(6)), stoi(result.at(7)), result.at(8), i);
	}
}


void Roster::Add(string studentId, string firstName, string lastName, string email, int age, int numDays1, int numDays2, int numDays3, string inputDegree, int i) {;
	classRosterArray[i] = new Student(studentId, firstName, lastName, email, age, numDays1, numDays2, numDays3, inputDegree);
	}


void Roster::PrintAll() {
	cout << left << setw(12) << "STUDENT ID" << setw(15) << "FIRST NAME" << setw(15)
		<< "LAST NAME" << setw(25) << "EMAIL" << setw(5) << "AGE" << setw(25) << "DAYS TO COMPLETE COURSE" << setw(23) << "DEGREE PROGRAM";
	cout << endl;
	for (int i = 0; i < rosterSize; i++) {
		classRosterArray[i]->PrintStudentInfo();
	}

	cout << endl;
}

void Roster::Remove(string userInputID) {
	bool idFound = false;

	for (int i = 0; (i < rosterSize) && !idFound; ++i) {
		if (classRosterArray[i]->GetStudentId() == userInputID) {
			classRosterArray[i] = classRosterArray[rosterSize - 1];
			--rosterSize;
			idFound = true;
		}
	}
	if (idFound) {
		cout << "Student ID: " << userInputID << " found and removed." << endl;
	}
	else
	{
		cout << "Student ID: not found." << endl;
	}

}

void Roster::AvgCourseDays(string studentid) {
	bool found = false;
	int totalVal = 0;
	int avgVal = 0;
	int numInt = 3;

	for (int i = 0; (i < 5) && found == false; i++) {
		if (classRosterArray[i]->GetStudentId() == studentid) {
			found = true;
			for (int j = 0; j < numInt; j++) {
				totalVal = totalVal + classRosterArray[i]->numDaysToCompleteCourse[j];
			}
			
		}
		
	}

	avgVal = totalVal / numInt;

	cout << "The average number of days for student " << studentid << " to complete a course is: " << avgVal << endl;

	return;
}


void Roster::PrintByDegreeProgram(DegreeType inputDegreeType) {
	cout << left << setw(12) << "STUDENT ID" << setw(15) << "FIRST NAME" << setw(15)
		<< "LAST NAME" << setw(25) << "EMAIL" << setw(5) << "AGE" << setw(25) << "DAYS TO COMPLETE COURSE" << setw(23) << "DEGREE PROGRAM";
	cout << endl;
	for (int i = 0; i < rosterSize; i++) {
		if (classRosterArray[i]->GetDegreeType() == inputDegreeType) {
			classRosterArray[i]->PrintStudentInfo();
		}
	}

	return;
}

//we need to check for the '@', '.' and can NOT have a space
void Roster::PrintInvalidEmails() {
	string emailChecker;

	for (int i = 0; i < rosterSize; i++) {
		emailChecker = classRosterArray[i]->GetEmail();
		if (emailChecker.find('@') == string::npos ||
			emailChecker.find('.') == string::npos ||
			emailChecker.find(' ') != string::npos) {
			
			cout << classRosterArray[i]->GetEmail() << endl;
		}

	}
	
	return;
}