#pragma once
#include <vector>
#include <algorithm>
#include <array>
#include <iostream>
#include <fstream>

void DemoPP04()
{
    // create an array<int> using STL array;
    std::array<int, 5> myArr{ { 1, 3, 5, 7, 9 } };

    // Specify a lambda..
    auto display = [](int& n) { std::cout << n << " "; };

    // use the lambda in for_each algorithm
    std::for_each(myArr.begin(), myArr.end(), display);
}

void DemoPP05()
{
    /*
    PP05: Write a program to store the following items as a string array and output these items to a file called Todo.txt.
        Date: 15 May 2022
        2:00 Meet with Daniel
        Polish brand idea
        Design prototype
        Organize photo shoot
        6:00 Dinner at The Palm
    */

    const int size{ 6 };
    std::string strArr[size];

    strArr[0] = "Date: 15 May 2022";
    strArr[1] = "2:00 Meet with Daniel";
    strArr[2] = "Polish brand idea";
    strArr[3] = "Design prototype";
    strArr[4] = "Organize photo shoot";
    strArr[5] = "6:00 Dinner at The Palm";

    std::ofstream myfile;
    myfile.open("Todo.txt");
    std::cout << "Writing to file - Todo.txt" << std::endl;
    
    // writing to myFile
    for (int i = 0; i < size; i++)
    {
        myfile << strArr[i] << ";" << std::endl;
    }
    myfile.close();

    std::cout << "Writing complete" << std::endl;
}

void DemoPP()
{

    /*
    Write a program to open and read a file - "Todo.txt". Apply error handling exception codes where needed;
    provide meaningful error-handling messages.
    */

    std::string filename = "Todo.txt";
    std::string descrip;
    
    std::ifstream inFile;

    try
    {
        inFile.open(filename.c_str());

        if (inFile.fail()) throw filename;  // the exception being checked

        while (inFile >> descrip)  // check next string
        {
            std::cout << descrip << " ";
        }

        inFile.close();
    }
    catch (std::string e)
    {
        std::cout << e << " was not successfully opened. " << std::endl;
        std::cout << "Please check that the file currently exists in the correct location." << std::endl;
    }
}