#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <conio.h>

void addToBus(std::vector<std::vector<char>>&passenger, std::vector<std::vector<char>>&Stops, int cCount, int mCount, int lCount, char stop)
{
    for (int row = 0; row < passenger.size(); row++)
    {
        for (int col = 0; col < passenger[row].size(); col++)
        {
            if (row > 1 && col > 0 && lCount > 0 && passenger[row][col] == 'E')
            {
                passenger[row][col] = 'L';
                Stops[row][col] = stop;
                lCount--;
            }
            else if (row > 2 && row < 6 && col > 0 && cCount > 0 && passenger[row][col] == 'E')
            {
                passenger[row][col] = 'C';
                Stops[row][col] = stop;
                cCount--;
            }
            else if (row > 6 && row < 11 && col > 0 && mCount > 0 && passenger[row][col] == 'E')
            {
                passenger[row][col] = 'M';
                Stops[row][col] = stop;
                mCount--;
            }
        }
    }
}

void removeFromBus(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops, int rCCount, int rMCount, int rLCount, char stop)
{
    for (int row = 0; row < passenger.size(); row++)
    {
        for (int col = 0; col < passenger[row].size(); col++)
        {
            if (row > 1 && row < 6 && col > 0 && rLCount > 0 && passenger[row][col] == 'L' && Stops[row][col] == stop)
            {
                passenger[row][col] = 'E';
                Stops[row][col] = 'E';
                rLCount--;

            }
            else if (row > 1 && row < 6 && col > 0 && rCCount > 0 && passenger[row][col] == 'C' && Stops[row][col] == stop)
            {
                passenger[row][col] = 'E';
                Stops[row][col] = 'E';
                rCCount--;
            }
            else if (row > 6 && row < 11 && col > 0 && rMCount > 0 && passenger[row][col] == 'M' && Stops[row][col] == stop)
            {
                passenger[row][col] = 'E';
                Stops[row][col] = 'E';
                rMCount--;
            }
        }
    }
}

void reset(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops)
{
    for (int row = 0; row < passenger.size(); row++)
    {
        for (int col = 0; col < passenger[row].size(); col++)
        {
            if (passenger[row][col] == 'L' || passenger[row][col] == 'M' || passenger[row][col] == 'C')
            {
                passenger[row][col] = 'E';
                Stops[row][col] = 'E';
            }
        }
    }
}

void print(std::vector<std::vector<char>>& passenger)
{
    for (int row = 0; row < passenger.size(); row++)
    {
        for (int col = 0; col < passenger[row].size(); col++)
        {
            std::cout << passenger[row][col] << "  ";
        }
        std::cout << std::endl;
    }
}

void stopAll(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops, std::fstream& stopsOn, std::fstream& stopsOff, char stop)
{
    char rStop = 'A';

    int mCount = 0;
    int lCount = 0;
    int cCount = 0;


    int Mcount = 0;
    int Lcount = 0;

    std::string lineOn = "";
    std::string lineOff = "";

    std::getline(stopsOn, lineOn);

    for (int i = 0; i < lineOn.length(); i++)
    {
        if (lineOn[i] == 'C')
        {
            cCount++;
        }
        else if (lineOn[i] == 'L')
        {
            lCount++;
        }
        else if (lineOn[i] == 'M')
        {
            mCount++;
        }
    }

    if (stop != 'A')
    {
        while (std::getline(stopsOff, lineOff, ','))
        {
            int rMCount = 0;
            int rLCount = 0;
            int rCCount = 0;

            for (int i = 0; i < lineOff.length(); i++)
            {
                if (lineOff[i] == 'C')
                {
                    rCCount++;
                }
                else if (lineOff[i] == 'L')
                {
                    rLCount++;
                }
                else if (lineOff[i] == 'M')
                {
                    rMCount++;
                }
            }
            removeFromBus(passenger, Stops, rCCount, rMCount, rLCount, rStop);
            rStop++;
            if (rStop == stop)
            {
                break;
            }
        }
    }

    for (int row = 0; row < passenger.size(); row++)
    {
        for (int col = 0; col < passenger[row].size(); col++)
        {
            if (row > 6 && col > 1 && passenger[row][col] == 'E')
            {
                Mcount++;
            }
            else if (row > 1 && col > 1 && passenger[row][col] == 'E')
            {
                Lcount++;
            }
        }
    }
    if (mCount > Mcount)
    {
        mCount = mCount - Mcount;
        std::cout << Mcount << " Males were not able to board the bus on this stop" << std::endl;
        std::cout << std::endl;

    }
    else if (lCount > Lcount)
    {
        lCount = lCount - Lcount;
        std::cout << Lcount << " Ladies were not able to board the bus on this stop" << std::endl;
        std::cout << std::endl;

    }
    addToBus(passenger, Stops, cCount, mCount, lCount, stop);
}

void menu()
{
    char stop = 'A';

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

    char choice = 'A';
    std::cout << "Rules" << std::endl;
    std::cout << std::endl;

    std::cout << "This Vector shows who is on the bus" << std::endl;
    std::cout << std::endl;

    print(passenger);

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
            stopAll(passenger, Stops, stopsOn, stopsOff, stop);
            stop++;
            print(passenger);
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
            reset(passenger, Stops);
            print(passenger);
            break;
        case 'S':
            print(Stops);
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



