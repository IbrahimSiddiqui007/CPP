#include <iostream>
#include <string>
#include <vector>
#include <fstream>

void print(std::vector<std::vector<char>>& Ladies,std::vector<std::vector<char>>& Men);
void stopALadies(std::vector<std::vector<char>>& Ladies);

int main()
{

    std::vector<std::vector<char>> ladies
    {
        {' ','A','B','C','D'},
        {' ',' ',' ','D','R'},
        {'1','E','E','E','E'},
        {'2','E','E','E','E'},
        {'3','E','E','E','E'},
        {'4','E','E','E','E'},
    };
    
    std::vector<std::vector<char>> Men
    {
        {' ',' ',' ','D','R'},
        {'5','E','E','E','E'},
        {'6','E','E','E','E'},
        {'7','E','E','E','E'},
        {'8','E','E','E','E'},
        {' ',' ',' ','D','R'}
    };

    

    print(ladies,Men);
    stopALadies(ladies);
    print(ladies,Men);


}


void print(std::vector<std::vector<char>>& Ladies,std::vector<std::vector<char>>& Men)
{
    
    for (int row = 0; row < Ladies.size(); row++)
    {
        for (int col = 0; col < Ladies[row].size(); col++)
        {

            std::cout << Ladies[row][col] << " ";
        }
        std::cout << std::endl;
    }

    for (int row = 0; row < Men.size(); row++)
    {
        for (int col = 0; col < Men[row].size(); col++)
        {

            std::cout << Men[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

void stopALadies(std::vector<std::vector<char>>& Ladies)
{
    
}


