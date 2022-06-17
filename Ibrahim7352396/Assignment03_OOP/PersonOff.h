#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Person.h"
class PersonOff : public Person
{
private:
	int rCCount;
	int rMCount;
	int rLCount;
public:
	PersonOff();
	PersonOff(int c, int m, int l);
	void setrCCount(int c);
	void setrMCount(int m);
	void setrLCount(int l);
	int getrCCount();
	int getrMCount();
	int getrLCount();
};
