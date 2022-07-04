#include <iostream>
#include <string>
#include "Employee.h"
#include "Student.h"
#include "Person.h"

void LectPrg06_07();
void LectPrg06_08();
void LectPrg06_12();

int main()
{
	std::cout << "Lecture 5 Starts here" << std::endl;
	std::cout << std::endl;

	std::cout << "LectPrg06_07" << std::endl;
	LectPrg06_07();


}

void LectPrg06_07()
{
	Student s1;
	s1.setGPA(3.5);
	s1.setName("Ibrum");
	

	std::cout << s1.getName() << "s gpa is " << s1.getGPA() << std::endl;

	Employee e1;
	e1.setSalary(964546);
	e1.setName("Ibrum");


	std::cout << e1.getName() << "s salary is " << e1.getSalary() << std::endl;


}