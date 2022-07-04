#include "Employee.h"
#include <string>


Employee::Employee()
	:salary(9000.0)
{

}

Employee::Employee(double salary, std::string name)
	: salary(salary), Person(name)
{

}

double Employee::getSalary()
{
	return salary;
}

void Employee::setSalary(double salary)
{
	salary = salary;
}