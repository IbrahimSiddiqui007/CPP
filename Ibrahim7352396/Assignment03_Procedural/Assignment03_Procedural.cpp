#include <iostream>
#include <string>
#include <vector>
#include <fstream>

bool checkT(std::vector<std::vector<char>>& passenger)
{
    int count = 0;

    for (int row = 0; row < 6; row++)
    {
        for (int col = 1; col < passenger[row].size(); col++)
        {
            if (passenger[row][col] == 'C' || passenger[row][col] == 'L')
            {
                count++;
            }
        }
    }
    if (count == 16)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkB(std::vector<std::vector<char>>& passenger)
{
    int count = 0;

    for (int row = 0; row < 6; row++)
    {
        for (int col = 1; col < passenger[row].size(); col++)
        {
            if (passenger[row][col] == 'C' || passenger[row][col] == 'L')
            {
                count++;
            }
        }
    }
    if (count == 16)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void addToBus(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops, int cCount, int mCount, int lCount, char stop)
{
    for (int row = 0; row < passenger.size(); row++)
    {
        for (int col = 0; col < passenger[row].size(); col++)
        {
            if (row > 1 && row < 6 && col > 0 && lCount > 0 && passenger[row][col] == 'E')
            {
                passenger[row][col] = 'L';
                Stops[row][col] = stop;
                lCount--;

            }
            else if (row > 1 && row < 6 && col > 0 && cCount > 0 && passenger[row][col] == 'E')
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

void print(std::vector<std::vector<char>>& passenger)
{

    for (int row = 0; row < passenger.size(); row++)
    {
        for (int col = 0; col < passenger[row].size(); col++)
        {
            std::cout << passenger[row][col] << " ";
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

    int rMCount = 0;
    int rLCount = 0;
    int rCCount = 0;

    int count = 0;

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
            std::cout << rStop << std::endl;
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
    
    if (checkT(passenger) == true && checkT(passenger) == true)
    {
        
    }

    addToBus(passenger, Stops, cCount, mCount, lCount, stop);

}

int main()
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


    int count = 0;

    while (!stopsOn.eof())
    {
        stopAll(passenger, Stops, stopsOn, stopsOff, stop);
        stop++;
        print(passenger);
        print(Stops);
        count++;
    }

    stopsOn.close();
}


