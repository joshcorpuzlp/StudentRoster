#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>
#include "student.h"
#include "roster.h"
#include "degree.h"
using namespace std;

int main() {
	
	//Project title and student name
	cout << "C867: Scripting and Programming Applications" << endl;
	cout << "Programming Language: C++" << endl;
	cout << "Name: Joshua Corpuz" << endl;
	cout << "Student ID: 001196484" << endl;
	cout << "Western Governors University" << endl << endl;

	cout << "--------------------------------------------------------" << endl;

	
	int numStudents = 5;
	//REQUIREMENT A
	string const studentData[] =

	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Joshua,Corpuz,joshua0905@gmail.com,23,15,30,60,SOFTWARE" };

	//REQUIREMENT E2a, E2b
	Roster* classRoster1 = new Roster(numStudents);
	classRoster1->ParseDataset(studentData, numStudents);
	classRoster1->PrintAll();

	cout << "--------------------------------------------------------" << endl;

	cout << "AVERAGE OF DAYS TO COMPLETE A COURSE PER STUDENT: " << endl;
	for (int i = 0; i < numStudents; i++) {
		classRoster1->AvgCourseDays(classRoster1->classRosterArray[i]->GetStudentId());
	}
	cout << endl;

	cout << "--------------------------------------------------------" << endl;

	cout << "THE FOLLOWING ARE INVALID EMAILS: " << endl;
	classRoster1->PrintInvalidEmails();
	cout << endl;

	cout << "--------------------------------------------------------" << endl;

	cout << "STUDENTS IN THE SOFTWARE DEGREE PROGRAM:" << endl;
	classRoster1->PrintByDegreeProgram(SOFTWARE);
	cout << endl;

	cout << "--------------------------------------------------------" << endl;
	
	cout << "REMOVING STUDENT A3:" << endl;
	classRoster1->Remove("A3");
	cout << endl;

	cout << "--------------------------------------------------------" << endl;
	
	cout << "UPDATED LIST: " << endl;
	classRoster1->PrintAll();
	cout << endl;

	cout << "--------------------------------------------------------" << endl;

	cout << "REMOVING STUDENT A3:" << endl;
	classRoster1->Remove("A3");
	cout << endl;
	
	cout << "--------------------------------------------------------" << endl;

	cout << "PROGRAM COMPLETE!" << endl;
	return 0;
}



//classRoster1->Add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, "SECURITY", 0);

/*Student* classRosterArray[5];
for (int i = 0; i < 5; i++) {
	classRosterArray[i] = new Student();
}
for (int i = 0; i < 5; i++) {
	classRosterArray[i]->PrintStudentInfo();
}*/






//int const numStudents = 5;
//Student student[numStudents];
//Student* ptr[numStudents];


/* THIS IS SAMPLE CODE ON HOW TO CREATE AN OBJECT USING A POINTER,
* USE THIS TO UNDERSTAND HOW TO CREATE AN ARRAY OF POINTERS
Student* student1 = nullptr;
student1 = new Student("A1", "John","Smith", "John1989@gmail.com",20
	,30, 35, 40, "SECURITY");
(*student1).PrintStudentInfo();
*/

/*
//FIXME-- needs to be included in the roster class as a member.
* creates an array of pointers
Student* students[numStudents];

// for loop to create a new object, the Student constructor with parameters was called.
//FIXME-- needs to be included in roster public member functions as the addFunction()
for (int i = 0; i < numStudents; i++) {
	students[i] = new Student("A1", "John", "Smith", "John1989@gmail.com", 20, 30, 35, 40, "SECURITY");
}

//FIXME-- needs to be included in the roster class as a PrintAllFunction()
//function calls the PrintStudentInfo from Student class. Utilizes for loop to iterate through the array of pointers
for (int i = 0; i < numStudents; i++) {
	(*students[i]).PrintStudentInfo();
}
*/





/*
student[0] = { "A1","John","Smith","John1989@gm ail.com",20,30,35,40,"SECURITY" };
ptr[1] = student;
student[1] = *ptr[1];
*/





//creates an array of 5 objects with the class Student.
//when printed, this will automatically produce all the Student objects initialized with the constructor function.
//Student student[5]; create an array of students
//FIXME:: edit the size of array to use an int variable instead
// Student student[5]; -- 

//create an array of students using the constructor

//for loop: used to print all objects in the student array.
//this should exist in the roster class
/*
for (int i = 0; i < 5; ++i) {
	student[i].PrintStudentInfo();
}
*/


/* THIS IS A TESTER FOR THE CONSTRUCTOR FUNCTION IN student.cpp
Student student1("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, "SECURITY");
student1.PrintStudentInfo();
*/