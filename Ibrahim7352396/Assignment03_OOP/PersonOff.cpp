#include <iostream>
#include <fstream>
#include <string>
#include "PersonOff.h"

PersonOff::PersonOff()
    :rCCount(0), rMCount(0), rLCount(0)
{

}

PersonOff::PersonOff(int c, int m, int l)
    : rCCount(c), rMCount(m), rLCount(l)
{

}

void PersonOff::setrCCount(int c)
{
    rCCount = c;
}

void PersonOff::setrMCount(int m)
{
    rMCount = m;
}

void PersonOff::setrLCount(int l)
{
    rLCount = l;
}

int PersonOff::getrCCount()
{
    return rCCount;
}

int PersonOff::getrMCount()
{
    return rMCount;
}

int PersonOff::getrLCount()
{
    return rLCount;
}
