#pragma once
#include "Person.h"
#include <iostream>
#include <string>

class Student : public Person
{
private:
	double GPA;
public:
	Student();
	Student(double gpa,std::string Sname);
	double getGPA();
	void setGPA(double gpa);
};