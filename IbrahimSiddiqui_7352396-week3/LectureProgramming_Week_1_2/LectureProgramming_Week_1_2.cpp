#include <iostream>

void Lect01_02(int);
void Lect01_03(int);
bool Lect01_04(int, int);
void Lect01_07();
void Lect01_10(int);


int main()
{
	//Lect01_02(3);
	//Lect01_03(5);
	//std::cout << Lect01_04(5,24) << std::endl;
	Lect01_07();
	//Lect01_10();
}

void Lect01_02(int n) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	for (int i = n; i > 1; i--)
	{
		for (int j = 1; j < i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

}

void Lect01_03(int a) {

	for (int i = 0; i < a; i++)
	{
		std::cout << "H";
	}
	std::cout << std::endl;
	if (a >= 5)
	{
		for (int f = 0; f < a - 2; f++)
		{
			std::cout << "  ";
			for (int g = 0; g < a - 4; g++)
			{
				std::cout << "H";
			}
			std::cout << std::endl;
		}
	}
	else if (a > 2 && a < 5)
	{
		for (int f = 0; f < a - 1; f++)
		{
			std::cout << " ";
			for (int g = 0; g < a - 2; g++)
			{
				std::cout << "H";
			}
			std::cout << std::endl;
		}

	}
	for (int k = 0; k < a; k++)
	{
		std::cout << "H";
	}
}

bool Lect01_04(int n1, int n2) {

	if (sqrt(n2) == n1)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void Lect01_07()
{
	char choice;
	int size;
	std::cout << "Please enter the units of the file size" << std::endl;
	std::cin >> choice;
	std::cout << "Please enter the size of the file" << std::endl;
	std::cin >> size;
}