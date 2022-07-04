#include "Person.h"
#include <string>
Person::Person()
:name("ibrahim")
{

}

Person::Person(std::string PName)
	:name(PName)
{

}

std::string Person::getName()
{
	return name;
}

void Person::setName(std::string n)
{
	name = n;
}