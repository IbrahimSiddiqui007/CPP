#include "Student.h"
#include <string>


Student::Student()
	:GPA(3.0)
{

}

Student::Student(double gpa,std::string name)
	: GPA(gpa),Person(name)
{

}

double Student::getGPA()
{
	return GPA;
}

void Student::setGPA(double gpa)
{
	GPA = gpa;
}