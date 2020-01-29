#include "Student.h"
#include <iostream>

using namespace std;

// constrctor (assign deafult values to variables)
Student::Student()
{
	name = "";
	studentNumber = "";
	GPA = 0;
	numCourses = 0;
	for (int i = 0; i < 100; i++)
	{
		courses[i].courseName = "";
		courses[i].grade = ' ';
		courses[i].semester = "";
	}
	userGrade = ' ';
	num = 0;
}

// this function sets the different componets of my struct equal to the
//given values.
void Student::setComponents(string courseName, float grade, string semester)
{
	courses[numCourses].courseName = courseName;
	courses[numCourses].grade = grade;
	courses[numCourses].semester = semester;

	numCourses++;
}

//This function calulate GPA
float Student::calculation()
{
	//I am assuming all classes have one credit hour 
	for (int i = 0; i < numCourses; i++)
	{
		// This add to GPA based on grade.
		switch (courses[i].grade)
		{
		 case 'A': GPA += 4.0;
			 break;
		 case 'B': GPA += 3.0;
			 break;
		 case 'C': GPA += 2.0;
			 break;
		 case 'D': GPA += 1.0;
			 break;
		 case 'F': GPA += 0.0;
			 break;
		 default: GPA += 0.0;
			 break;
		}
	}
	//GPA is then divided by the number of courses.
	GPA = GPA / numCourses;
	return GPA;
}

//I tried to make it return the course name when th inputted grade equals
// the grade of a given course.
string Student::displayClass()
{
	
	if (courses[num].grade == userGrade)
	{
		return courses[num].courseName;
	}
	num++;
}

