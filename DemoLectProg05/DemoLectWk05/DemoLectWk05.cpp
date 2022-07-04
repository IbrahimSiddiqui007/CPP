// DemoLectWk05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Trip.h"
#include "Trip2.h"
#include "Trainers.h"

void Padding();
void TripDemo();
void InheritDemo();

int main()
{
    // TripDemo();
    // InheritDemo();

    return 0;
}

void Padding()
{
    //bool var1 { false };
    //int var2{ 0 };
    //double var3{ 0.00 };
    //std::string var4;

    //std::cout << "The sizeof bool is " << sizeof(var1) << std::endl;
    //std::cout << "The sizeof int is " << sizeof(var2) << std::endl;
    //std::cout << "The sizeof double is " << sizeof(var3) << std::endl;
    //std::cout << "The sizeof string is " << sizeof(var4) << std::endl;
    //see https://docs.microsoft.com/en-us/cpp/c-language/padding-and-alignment-of-structure-members?view=msvc-170

}

void TripDemo()
{
    /*
    * Note:
    * sizeof() - queries the size of data type or object. Yields the size
    * in bytes of the object representation / object represenation of the data type 
    */

    Trip* p, p1;
    std::cout << "About Trip class" << std::endl;
    std::cout << "The sizeof *p is " << sizeof(p) << std::endl;
    std::cout << "The sizeof Trip p1 is " << sizeof(p1) << std::endl;

    std::cout << std::endl << std::endl;
    std::cout << "About Trip2 class" << std::endl;
    Trip2* q, q1;
    std::cout << "The sizeof *q is " << sizeof(q) << std::endl;
    std::cout << "The sizeof Trip02 q1 is " << sizeof(q1) << std::endl;
}

void InheritDemo()
{
    SportsShoes aShoe;
    SportsShoes puma("Running");

    std::cout << "Shoe type is " << aShoe.GetType() << std::endl;
    std::cout << "Shoe type is " << puma.GetType() << std::endl;

    std::cout << std::endl << std::endl;
    
    Trainers Adidas(200, "Tennis", "Adidas Ubersonic");

    std::cout << "Shoe type is " << Adidas.GetType() << std::endl;
    std::cout << "Shoe brand is " << Adidas.GetBrand() << std::endl;

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
