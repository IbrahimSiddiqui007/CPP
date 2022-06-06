#include <iostream>
#include <string>
#include <vector>
#include <fstream>

void print(std::vector<std::vector<char>> &vect);

int main()
{

	std::vector<std::vector<char>> bus
	{
		{' ','0','1','2','3'},
		{' ',' ',' ',' ','D'},
		{'1','E','E','E','E'},
		{'2','E','E','E','E'},
		{'3','E','E','E','E'},
		{'4','E','E','E','E'},
		{' ',' ',' ',' ','D'},
		{'5','E','E','E','E'},
		{'6','E','E','E','E'},
		{'7','E','E','E','E'},
		{'8','E','E','E','E'},
		{' ',' ',' ',' ','D'}
	};

	print(bus);


}


void print(std::vector<std::vector<char>>& vect)
{
	for (int row = 0; row < vect.size(); row++)
	{
		for (int col = 0; col < vect[row].size(); col++)
		{
			std::cout << vect[row][col];
		}
	}
}

