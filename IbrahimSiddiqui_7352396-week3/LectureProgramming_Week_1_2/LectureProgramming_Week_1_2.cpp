#include <iostream>

void LectProg01_02(int);
void LectProg01_03(int);
bool LectProg01_04();
void LectProg01_07();
void LectProg01_10();
void LectProg02_02();
void LectProg02_04();
void LectProg02_07();
void LectProg02_12();
void LectProg02_02();

int main()
{
	//LectProg01_02(3);
	//LectProg01_03(5);
	//std::cout << LectProg01_04() << std::endl;
	//LectProg01_07();
	//LectProg01_10();
	//LectProg02_02();
	LectProg02_04();
	//LectProg02_07();
	//LectProg02_12();
	//LectProg02_Deep02();
}

void LectProg01_02(int n) {

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

void LectProg01_03(int a) {

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

bool LectProg01_04() {
	int n1, n2;

	std::cout << "Please enter the first number" << std::endl;
	std::cin >> n1;

	std::cout << "Please enter the Second number" << std::endl;
	std::cin >> n2;

	if (sqrt(n2) == n1)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void LectProg01_07()
{
	char choice;
	long long size;
	long long mb;
	long long kb;
	long long b;

	std::cout << "Please enter the units of the file size" << std::endl;
	std::cin >> choice;

	choice = toupper(choice);

	std::cout << "Please enter the size of the file" << std::endl;
	std::cin >> size;

	std::cout << std::endl;

	switch (choice)
	{
	case 'G':

		mb = size * 1024;
		kb = mb * 1024;
		b = kb * 1024;

		std::cout << size << " Gigabytes is " << mb << " Megabytes" << std::endl;
		std::cout << mb << " Megabytes is " << kb << " Kilobytes" << std::endl;
		std::cout << kb << " Kilobytes is " << b << " Bytes" << std::endl;
		break;

	case 'M':

		kb = size * 1024;
		b = kb * 1024;

		std::cout << size << " Megabyte is " << kb << " Kilobytes" << std::endl;
		std::cout << kb << " Kilobytes is " << b << " Bytes" << std::endl;
		break;

	case 'K':

		b = size * 1024;

		std::cout << size << " Kilobyte is " << b << " Bytes" << std::endl;
		break;

	default:
		std::cout << "Please enter the correct Unit";
		break;
	}
}

void LectProg01_10() {
	std::string sNum, sName, cName, stateName;
	int zCode;

	std::cout << "Please enter your Street Number" << std::endl; //If there is a space in the input then replace the space with a -
	std::cin >> sNum;

	std::cout << "Please enter your Street Name" << std::endl; //If there is a space in the input then replace the space with a -
	std::cin >> sName;

	std::cout << "Please enter the name of the City you live in" << std::endl; //If there is a space in the input then replace the space with a -
	std::cin >> cName;

	std::cout << "Please enter the name of the State that you live in" << std::endl; //If there is a space in the input then replace the space with a -
	std::cin >> stateName;

	std::cout << "Please enter the Zipcode that you live in" << std::endl; //If there is a space in the input then replace the space with a -
	std::cin >> zCode;

	std::cout << sNum << ", " << sName << ", " << cName << ", " << stateName << ", " << zCode << std::endl;
}

void LectProg02_02() {

}

void LectProg02_04() {
	
	int num, cPostive, cNegative;

	while (num != 0)
	{
		
	}
}

void LectProg02_07() {}

void LectProg02_12() {}

void LectProg02_02() {}
