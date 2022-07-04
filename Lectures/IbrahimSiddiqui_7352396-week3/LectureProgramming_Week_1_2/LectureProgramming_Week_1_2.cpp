#include <iostream>
#include <string>
void LectProg01_02(int);
void LectProg01_03(int);
bool LectProg01_04();
void LectProg01_07();
void LectProg01_10();
void LectProg02_02();
void LectProg02_04();
void LectProg02_07();
void LectProg02_12();
void LectProg02_Deep02();

int main()
{
	std::cout << "LectProg01_02" << std::endl;
	LectProg01_02(3);
	std::cout << std::endl;

	std::cout << "LectProg01_03" << std::endl;
	LectProg01_03(10);
	std::cout << std::endl;

	std::cout << "LectProg01_04" << std::endl;
	std::cout << LectProg01_04() << std::endl;
	std::cout << std::endl;

	std::cout << "LectProg01_07" << std::endl;
	LectProg01_07();
	std::cout << std::endl;

	std::cout << "LectProg01_10" << std::endl;
	LectProg01_10();
	std::cout << std::endl;

	std::cout << "*********************************************************" << std::endl;
	std::cout << "Start Of Lecture 2" << std::endl;
	std::cout << "*********************************************************" << std::endl;
	std::cout << std::endl;

	std::cout << "LectProg02_02" << std::endl;
	LectProg02_02();
	std::cout << std::endl;

	std::cout << "LectProg02_04" << std::endl;
	LectProg02_04();
	std::cout << std::endl;

	std::cout << "LectProg02_07" << std::endl;
	LectProg02_07();
	std::cout << std::endl;

	std::cout << "LectProg02_12" << std::endl;
	LectProg02_12();
	std::cout << std::endl;

	std::cout << "LectProg02_Deep02" << std::endl;
	LectProg02_Deep02();
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
	double size;
	double mb;
	double kb;
	double b;

	std::cout << "Please enter the units of the file size" << std::endl;
	std::cin >> choice;
	std::cout << std::endl;

	std::cin.clear();
	std::cin.ignore();

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
	int zCode = 0;

	std::cout << "Please enter your Street Number" << std::endl; //If there is a space in the input then replace the space with a -
	std::getline(std::cin,sNum);

	std::cout << "Please enter your Street Name" << std::endl; //If there is a space in the input then replace the space with a -
	std::getline(std::cin, sName);

	std::cout << "Please enter the name of the City you live in" << std::endl; //If there is a space in the input then replace the space with a -
	std::getline(std::cin,cName);

	std::cout << "Please enter the name of the State that you live in" << std::endl; //If there is a space in the input then replace the space with a -
	std::getline(std::cin,stateName);

	std::cout << "Please enter the Zipcode that you live in" << std::endl; //If there is a space in the input then replace the space with a -
	std::cin >> zCode;

	std::cout << std::endl;
	std::cout << sNum << ", " << sName << ", " << cName << ", " << stateName << ", " << zCode << std::endl;
}

// Start of Lecture 2

void LectProg02_02() {

}

void LectProg02_04() {
	

	std::cin.clear();
	std::cin.ignore();

	int num = 1;
	int cPositive = 0;
	int cNegative = 0;


	while (num != 0)
	{
		std::cout << "Please enter a number" << std::endl;
		std::cin >> num;

		std::cin.clear();
		std::cin.ignore();

		if (num < 0)
		{
			cNegative++;
		}
		else if (num > 0)
		{
			cPositive++;
		}
		
	}
	std::cout << "The number of postive numbers are: " << cPositive << std::endl;
	std::cout << "The number of Negative numbers are: " << cNegative << std::endl;

}

void LectProg02_07() {

	for (int i = 1; i <=300; i++)
	{
		if (i % 3 == 0 && i % 7 == 0)
		{
			std::cout << i << std::endl;
		}
	}
}

void LectProg02_12() {

	int x;
	std::cout << "Please enter 2 or 3" << std::endl;
	std::cin >> x;

	switch (x)
	{
	case 2:
		x++;
		break;

	case 3:
		x--;
		break;

	default:
		std::cout << "End!";
		break;
	}
}

void LectProg02_Deep02() {
	for (int i = 2000; i <= 2099; i++)
	{
		if (i % 4 == 0 || (i % 100 == 0 && i % 400 == 0))
		{
			std::cout << i << std::endl;
		}
	}
}
