#include <iostream>
#include <fstream>
#include <string>
#include "PersonOn.h"

PersonOn::PersonOn()
:cCount(0), mCount(0), lCount(0)
{

}

PersonOn::PersonOn(int c, int m, int l)
	: cCount(c), mCount(m), lCount(l)
{

}

void PersonOn::setcCount(int c)
{
	cCount = c;
}

void PersonOn::setmCount(int m)
{
	mCount = m;
}

void PersonOn::setlCount(int l)
{
	lCount = l;
}

int PersonOn::getcCount()
{
	return cCount;
}

int PersonOn::getmCount()
{
	return mCount;
}

int PersonOn::getlCount()
{
	return lCount;
}

void PersonOn::count(std::fstream& stopsOn)
{
	std::string lineOn = "";
    int c = 0;
    int m = 0;
    int l = 0;

    std::getline(stopsOn, lineOn);
    for (int i = 0; i < lineOn.length(); i++)
    {
        if (lineOn[i] == 'C')
        {
            c++;
        }
        else if (lineOn[i] == 'L')
        {
            l++;
        }
        else if (lineOn[i] == 'M')
        {
            m++;
        }
    }

    setcCount(c);
    setlCount(l);
    setmCount(m);

}