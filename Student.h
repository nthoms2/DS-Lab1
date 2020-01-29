


#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

struct courseInfo
{
	string courseName;
	char grade;
	string semester;

};

class Student
{
public:
	//constructor
	//precondition: None.
	//Postcondtion: Object created
	Student();

	//Sets the name for the student.
	//precondition: The constructor is called.
	//Postcondtion: The name for the student is stored.
	void setName(string name_) { name = name_; };

	//Outputs the student's name.
	//precondition: The name stored can be accessed.
	//Postcondtion: The name is returned and outputed to the screen.
	string getName() { return name; };

	//Sets the number for the student.
	//precondition: The constructor is called.
	//Postcondtion: The number for the student is stored.
	void setNumber(string studentNumber_) { studentNumber = studentNumber_; };
	
	//Outputs the student's number.
	//precondition: The number stored can be accessed.
	//Postcondtion: The number is returned and outputed to the screen.
	string getNumber() { return studentNumber; };

	//Sets the components of a class for the student.
	//precondition: The constructor is called.
	//Postcondtion: The components of a class for the student is stored in the array.
	void setComponents(string courseName, float grade, string semester);

	//Outputs the course name.
	//precondition: The name stored can be accessed.
	//Postcondtion: The name is returned and outputed to the screen.
	string getCourseName(int i) { return courses[i].courseName; };

	//Outputs the course grade.
	//precondition: The grade stored can be accessed.
	//Postcondtion: The grade is returned and outputed to the screen.
	char getGrade(int i) { return courses[i].grade; };

	//Outputs the course semester.
	//precondition: The semester stored can be accessed.
	//Postcondtion: The semester is returned and outputed to the screen.
	string getSemester(int i) { return courses[i].semester; };

	//Calculates GPA.
	//precondition: The constuctor is called ant the array of a struct can
	//be used..
	//Postcondtion: The GPA is calculated and returned.
	float calculation();

	//Outputs the GPA.
	//precondition: The GPA stored can be accessed.
	//Postcondtion: The GPA is returned and outputed to the screen.
	float getGPA() { return GPA; };

	//I ried to use these functions to get a use inputted grade
	//and use that grade to ouput the corresponding classes but
	//i had some my problems
	void gradePick(char userGrade_) {userGrade = userGrade_;};
	string displayClass();

private:
	// these are all of my class variables.
	string name;
	string studentNumber;
	float GPA;
	courseInfo courses[100];
	int numCourses;
	char userGrade;
	int num;
};

#endif