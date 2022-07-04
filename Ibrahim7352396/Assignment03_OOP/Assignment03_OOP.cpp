#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <conio.h>
#include "Person.h"
#include "Bus.h"
#include "PersonOff.h"
#include "PersonOn.h"


void menu()
{
    char stop = 'A';
    char choice = 'A';

    PersonOn pOn;
    PersonOff pOff;
    Bus b;

    std::fstream stopsOn;
    std::fstream stopsOff;

    stopsOn.open("StopsOn.txt", std::ios::in | std::ios::out);
    stopsOff.open("StopsOff.txt", std::ios::in | std::ios::out);

    std::vector<std::vector<char>> passenger
    {
        {' ','A','B','C','D'},
        {' ',' ',' ','D','R'},
        {'1','E','E','E','E'},
        {'2','E','E','E','E'},
        {'3','E','E','E','E'},
        {'4','E','E','E','E'},
        {' ',' ',' ','D','R'},
        {'5','E','E','E','E'},
        {'6','E','E','E','E'},
        {'7','E','E','E','E'},
        {'8','E','E','E','E'},
        {' ',' ',' ','D','R'}
    };

    std::vector<std::vector<char>> Stops
    {
        {' ','A','B','C','D'},
        {' ',' ',' ','D','R'},
        {'1','E','E','E','E'},
        {'2','E','E','E','E'},
        {'3','E','E','E','E'},
        {'4','E','E','E','E'},
        {' ',' ',' ','D','R'},
        {'5','E','E','E','E'},
        {'6','E','E','E','E'},
        {'7','E','E','E','E'},
        {'8','E','E','E','E'},
        {' ',' ',' ','D','R'}
    };

    std::cout << "Rules" << std::endl;
    std::cout << std::endl;

    std::cout << "This Vector shows who is on the bus" << std::endl;
    std::cout << std::endl;

    b.print(passenger);

    std::cout << "L: Ladies" << std::endl << "M: Men or Male Teenagers" << std::endl << "C: Children" << std::endl << "E: Empty seat" << std::endl;
    std::cout << std::endl;

    while (choice != 'D') {
        std::cout << "Please enter D to continue" << std::endl;
        choice = toupper(_getch());
    }

    std::cout << std::endl;

    while (choice != 'Q') {
        std::cout << "Please select one of the options" << std::endl << "D: to see stops" << std::endl << "Q: to quit" << std::endl << "R: to reset to default plan" << std::endl << "S: To see which passenger is from which stop" << std::endl;

        choice = toupper(_getch());

        switch (choice) {
        case 'D':
            if (stop <= 'F')
            {
                std::cout << std::endl;
                std::cout << "Stop " << stop << std::endl;
                std::cout << std::endl;
                b.stopAll(passenger, Stops, stopsOn, stopsOff, stop);
                stop++;
                b.print(passenger);
                std::cout << std::endl;

            }
            break;
        case 'Q':
            choice = 'Q';
            break;
        case 'R':
            stop = 'A';
            stopsOn.clear();
            stopsOn.seekg(0, std::ios::beg);
            stopsOff.clear();
            stopsOff.seekg(0, std::ios::beg);
            b.reset(passenger, Stops);
            b.print(passenger);
            break;
        case 'S':
            b.print(Stops);
            break;
        default:
            std::cout << "Please enter again" << std::endl;
            break;
        }
    }
    std::cout << std::endl;
    stopsOn.close();
    stopsOff.close();

}

int main()
{
    menu();
}