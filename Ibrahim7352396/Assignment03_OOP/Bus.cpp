#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <conio.h>
#include "Bus.h"
#include "PersonOff.h"
#include "PersonOn.h"
#include "Person.h"

void Bus::addToBus(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops,PersonOn& p, char stop)
{
    for (int row = 0; row < passenger.size(); row++)
    {
        for (int col = 0; col < passenger[row].size(); col++)
        {
            if (row > 1 && col > 0 && p.getlCount() > 0 && passenger[row][col] == 'E')
            {
                passenger[row][col] = 'L';
                Stops[row][col] = stop;
                p.setlCount(p.getlCount() - 1);
            }
            else if (row > 2 && row < 6 && col > 0 && p.getcCount() > 0 && passenger[row][col] == 'E')
            {
                passenger[row][col] = 'C';
                Stops[row][col] = stop;
                p.setcCount(p.getcCount() - 1);
            }
            else if (row > 6 && row < 11 && col > 0 && p.getmCount() > 0 && passenger[row][col] == 'E')
            {
                passenger[row][col] = 'M';
                Stops[row][col] = stop;
                p.setmCount(p.getmCount() - 1);
            }
        }
    }
}

void Bus::removeFromBus(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops,PersonOff& pff, char stop)
{
    for (int row = 0; row < passenger.size(); row++)
    {
        for (int col = 0; col < passenger[row].size(); col++)
        {
            if (row > 1 && row < 6 && col > 0 && pff.getrLCount() > 0 && passenger[row][col] == 'L' && Stops[row][col] == stop)
            {
                passenger[row][col] = 'E';
                Stops[row][col] = 'E';
                pff.setrLCount(pff.getrLCount()-1);

            }
            else if (row > 1 && row < 6 && col > 0 && pff.getrCCount() > 0 && passenger[row][col] == 'C' && Stops[row][col] == stop)
            {
                passenger[row][col] = 'E';
                Stops[row][col] = 'E';
                pff.setrCCount(pff.getrCCount() - 1);
            }
            else if (row > 6 && row < 11 && col > 0 && pff.getrMCount() > 0 && passenger[row][col] == 'M' && Stops[row][col] == stop)
            {
                passenger[row][col] = 'E';
                Stops[row][col] = 'E';
                pff.setrMCount(pff.getrMCount()-1);
            }
        }
    }
}

void Bus::reset(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops)
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

void Bus::print(std::vector<std::vector<char>>& passenger)
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

void Bus::stopAll(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops, std::fstream& stopsOn, std::fstream& stopsOff, char stop)
{
    char rStop = 'A';
    
    PersonOff pf;
    PersonOn po;

    int Mcount = 0;
    int Lcount = 0;

    
    std::string lineOff = "";

    po.count(stopsOn);

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
            pf.setrCCount(rCCount);
            pf.setrMCount(rMCount);
            pf.setrLCount(rLCount);

            removeFromBus(passenger, Stops, pf, rStop);
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
    if (po.getmCount() > Mcount)
    {
        po.setmCount(po.getmCount() - Mcount);
        std::cout << Mcount << " Males were not able to board the bus on this stop" << std::endl;
        std::cout << std::endl;

    }
    else if (po.getlCount() > Lcount)
    {
        po.setlCount(po.getlCount() - Lcount);
        std::cout << Lcount << " Ladies were not able to board the bus on this stop" << std::endl;
        std::cout << std::endl;

    }
    addToBus(passenger, Stops,po, stop);
}