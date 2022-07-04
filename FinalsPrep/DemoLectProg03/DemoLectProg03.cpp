// DemoLectProg03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sample.h"

void LectPrg03_05();

int main()
{
    LectPrg03_05();

    /*
    Why this link error?
    Note: When you run this code: you get link error LNK2019:
    Error	LNK2019	unresolved external symbol "public: __cdecl Sample::Sample(int)" 
    (??0Sample@@QEAA@H@Z) referenced in function "void __cdecl LectPrg03_05(void)" 
    (?LectPrg03_05@@YAXXZ)	DemoLectProg03	D:\##000LectPrepSpring2022\02 CSCI251\02 
    LectPrep\wk04\moved2week03\DemoLectProg03\DemoLectProg03.obj	1	
    */

    //Note: Refer to the lecture slides on codes in Circle object and complete the required codes for:
    // a. Default constructor
    // b. Parameter constructor
    // c. Copy constructor - here, int x is copied.

    //std::cout << "Hello World!\n";
}

void LectPrg03_05()
{
    Sample first(4);
    //Sample second(4, 8); // Error: No instance of constructor matches the argument list... sample::sample(int, int)...
    //Sample third;        // Error: No default constructor...
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
