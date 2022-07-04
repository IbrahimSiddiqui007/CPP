#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Person.h"
class PersonOn : public Person
{
private:
	int cCount;
	int lCount;
	int mCount;
public:
	PersonOn();
	PersonOn(int c, int m, int l);
	void setcCount(int c);
	void setmCount(int m);
	void setlCount(int l);
	int getcCount();
	int getmCount();
	int getlCount();
	void count(std::fstream& stopsOn);

};
