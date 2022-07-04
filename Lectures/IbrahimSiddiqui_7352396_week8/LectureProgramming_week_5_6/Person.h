#pragma once
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
public:
	Person();
	Person(std::string PName);
	std::string getName();
	void setName(std::string n);
};