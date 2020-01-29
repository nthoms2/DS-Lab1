//Nolan Thoms
//Data Structures spring 2020
//Date
//Lab 1 creating a class

#include <iostream>
#include "student.h"

int main()
{
	//class is created
	Student student1;

	//This chunk sets all of the different variables and does the calculation.
	student1.setName("student");
	student1.setNumber("111111");
	student1.setComponents("Calculus", 'A', "Fall 2019");
	student1.setComponents("Chemistry", 'B', "Fall 2019");
	student1.setComponents("SoupTasting", 'A', "Spring 2020");
	student1.setComponents("Calculus 2", 'C', "Spring 2020");
	student1.calculation();

	//Thi outputs name and number.
	cout << student1.getName() << endl;
	cout << student1.getNumber() << "\n" << endl;

	//This outputs the different components of each course
	for (int i = 0; i < 4; i++) // goes through the 4 courses.
	{
		cout << student1.getCourseName(i) << endl;
		cout << student1.getGrade(i) << endl;
		cout << student1.getSemester(i) << endl;
		cout << "\n";
	}
	//This outputs the calculated GPA.
	cout << student1.getGPA() << endl;

	//User enters a grade.
	cout << "\nEnter a capital letter for a grade and the classes that match that grade will appear: ";
	char grade;
	cin >> grade; cout << "\n \n";

	//Grade is stored in the class.
	student1.gradePick(grade);

	//Attempts to output the requested courses.
	for (int i = 0; i < 4; i++)
	{
		cout << student1.displayClass();
	}
	return 0;
}

//The main reason i could not get it to work is because i could not get the
//num to increase in the class which would return a differnt part of the
//array, but whenver I tried to move the "num++ somewhere where it would
//work there was weird error that opened a different file. Nevermind that still happens.