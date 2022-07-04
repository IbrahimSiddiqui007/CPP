#pragma once
#include "Person.h"
#include <iostream>
#include <string>

class Employee : public Person
{
private:
	double salary;
public:
	Employee();
	Employee(double salary, std::string Sname);
	double getSalary();
	void setSalary(double salary);

};