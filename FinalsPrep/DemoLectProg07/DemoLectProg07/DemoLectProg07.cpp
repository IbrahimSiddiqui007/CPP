// DemoLectProg07.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Demonstration of lack of polymorphism

#include <iostream>
#include "Derived.h"

int main()
{
    // Creation of a Base object;
    Base abase;
    abase.print();

    // Creation of a derived object;
    Derived aD;
    aD.print();
   
    std::cout << std::endl << std::endl;

    /*
    // Creation of a pointer to the base class (simulating socket)
    Base* ptr;

    // Let ptr point to an object of the Base class
    std::cout << "Let ptr point to an object of the Base class" << std::endl;
    ptr = new Base();
    ptr->print();
    delete ptr;

    std::cout << std::endl;

    // Let ptr point to an object of the Derived object
    std::cout << "Let ptr point to an object of the Derived class" << std::endl;
    ptr = new Derived();
    ptr->print();
    delete ptr;
    */

    // Question:
    // What is the issue?
    // How do we fix this issue?


    return 0;
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
