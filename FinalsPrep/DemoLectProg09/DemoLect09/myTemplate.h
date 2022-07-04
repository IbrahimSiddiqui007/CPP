#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

//=========================================================================================================
/*
Create a vector with the following elements: 2,4,6,8,10,12. Using range-based for loop, display all the elements
in the console:
*/

std::vector<int> RangeBasedForLoop()
{
    std::vector<int> aVect;

    for (int x = 1; x < 7; x++)
    {
        aVect.push_back(x * 2);
    }

    return aVect;
}

void DisplayRBFL(std::vector<int> v)
{
    for (auto ele : v)
    {
        std::cout << "This is element in vector<int> : " << ele << " , " << std::endl;
    } 

    std::cout << std::endl;
}

void DemoRangeBasedForLoop()
{
    DisplayRBFL(RangeBasedForLoop());
}

//=========================================================================================================
/*
LectPrg09-02. Write a function template that computes the average of two numbers, such as integers and long;
integers and doubles; or long and doubles.
*/

template <typename T>
T getAverage(T first, T second)
{
    return ((first + second) / 2);
}

//=========================================================================================================
/*
LectProg09-05 v02. Write a template for a C++ class called GroupData that creates a struct of any two data items of any type.
For example, we can have a group of data for an integer and a double; a group of data for a double and a char, and so on.
*/

template <typename T, typename U>
class GroupData
{
private:
    T first;
    U second;

public:
    GroupData(T f, U s) : first(f), second(s) { }
   
    void setFirst(T f)
    {
        first = f;
    }

    void setSecond(U s)
    {
        second = s;
    }

    T getFirst() { return first; }

    U getSecond() { return second; }

    void DisplayData()
    {
        std::cout << "The first data is : " << getFirst() << "; " << "the second data is : " << getSecond() << std::endl;
    }
};

void DemoGroupData()
{
    GroupData<int, char> Demo1(5, 'v');
    Demo1.DisplayData();

    GroupData<double, std::string> Demo2(34.58, "Halo Friend");
    Demo2.DisplayData();
}


/*
Create a lambda expression that will take two int parameters and return the larger value.
Use this lambda expression to sort an array of chars in descending order.

Note1: use char arrChar[] = { 'D', 'n', 'R', 's', 'W', 'y' };
Note2: use C++ sort algorithm. But C++ sort algorithm sort in ascending order by default.
*/

void DisplayArr(char* arrPtr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << *(arrPtr + i) << " ";
    }
}

void DemoLambda()
{
    char arrChar[] = { 'D', 'n', 'R', 's', 'W', 'y' }; // ASCII values: D - 68; n - 110; R - 82; s - 115; W - 87; y - 121

    // find the size of char array
    int arrSize = sizeof(arrChar) / sizeof(arrChar[0]);

    // sort the array - ascending order;
    std::sort(arrChar, arrChar + arrSize); // Sorted ASCII values: D - 68; R - 82; W - 87; n - 110; s - 115; y - 121

    //Display the array
    DisplayArr(arrChar, arrSize); // Sorted Display: D R W n s y

    std::cout << std::endl;

    // sort the array - decending order
    std::sort(arrChar, arrChar + arrSize, [](char a, char b) { return b < a; });

    //Display the array
    DisplayArr(arrChar, arrSize); // Sorted Display: y s n W R D - ASCII y - 121; s - 115; n - 110; W - 87; R - 82; D - 68

    /*
        Answers:
        D R W n s y - (Default sort, ascending)
        y s n W R D - (Sort, descending using lambda expressions.)
    */

}

