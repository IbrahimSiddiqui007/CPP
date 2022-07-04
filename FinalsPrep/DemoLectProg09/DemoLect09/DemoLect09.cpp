// DemoLect09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "myTemplate.h"


/*
Create a vector with the following elements: 2,4,6,8,10,12. Using range-based for loop, display all the elements
in the console:
*/

/*
LectPrg09-02. Write a function template that computes the average of two numbers, such as integers and long;
integers and doubles; or long and doubles.
*/

/*
LectProg09-05 v02. Write a template for a C++ class called GroupData that creates a container of any two data items of any type.
For example, we can have a group of data for an integer and a double; a group of data for a double and a char, and so on.
*/

/*
Create a lambda expression that will take two int parameters and return the larger value.
Use this lambda expression to sort an array of chars in descending order.

Note1: use char arrChar[] = { 'D', 'n', 'R', 's', 'W', 'y' };
Note2: use C++ sort algorithm. But C++ sort algorithm sort in ascending order by default.
*/

int main()
{
    /*
       Demo Range-based for loop
    */
    //DemoRangeBasedForLoop();

    /*
    int inf{ 10 }, inS{ 15 };
    double df{ 10.0 }, dS{ 15.0 };
    char chf{ 'A' }, chS{ 's' };

    std::cout << "The value of int average is: " << getAverage(inf, inS) << std::endl;
    std::cout << "The value of double average is: " << getAverage(df, dS) << std::endl;
    std::cout << "The value of char average is: " << getAverage(chf, chS) << std::endl;
    */

    /*
    Answers:
        The value of int average is: 12
        The value of double average is: 12.5
        The value of char average is: Z
        Note: 'A' = 65; 's' = 115, average = 90; 'Z' = 90
    */

    //DemoGroupData();
    /*
        Display the following test:
        The first data is : 5; the second data is : v
        The first data is : 34.58; the second data is : Halo Friend
    */

    //DemoLambda();

    //std::cout << "Hello World!\n";
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
