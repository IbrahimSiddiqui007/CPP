#include <iostream>
#include <fstream>
#include <string>

void LectPrg04_02();
void LectPrg04_04();
void LectPrg04_06();
void LectPrg04_08();
void LectPrg04_11();



int main()
{
	/* LectPrg03-01
	* The default constructer declaration is Fun ();
	* The parameter constructor declaration is Fun (int x);
	* The copy constructor declaration is Fun (const Fun& fun);
	*/

	/* LectPrg03-03
	* 
	* Rectangle::Rectangle (int len, int wid)
	* :length(len),width(wid)
	* {
	* 
	* }
	* 
	*/

	/* LectPrg03-06
	* No curly brackets after class First and double getY() const;(no semi-colon after this aswell) 
	* No default constructor
	* 
	* 
	*/

	/* LectPrg03-08
	* The destructor has a value being passed to it
	*
	*
	*/

	/* LectPrg03-10
	* the following is correct
	* type Sample::getValue()
	* {
	* return...;
	* }
	* 
	*/

	//LectPrg04_02();
	//LectPrg04_04();
	LectPrg04_06();
	//LectPrg04_08();
	//LectPrg04_11();

	return 0;
}


void LectPrg04_02() 
{
	char val = ' ';
	int DecVal = 0;


	std::cout << "Please press a key on your keyboard" << std::endl;
	std::cin >> val;
	DecVal = int(val);

	std::cout << "The entered key is: " << val << std::endl;
	std::cout << "The decimal value of the entered key is: " << DecVal << std::endl;
	std::cout << "The binary value of the entered key is: " << std::endl;

	for (int i = 7; i >= 0; i--)
	{
		int j = DecVal >> i;
		if (j & 1)
		{
			std::cout << "1";
		}
		else
		{
			std::cout << "0";
		}
	}
}

void LectPrg04_04()
{
	std::string line = " ";
	std::fstream q4File;
	q4File.open("q4File.txt", std::ios::in | std::ios::binary | std::ios::out);
	int choice = 0;
	int ctr = 0;

	std::cout << "Please select 1 to see File data in plain text or" <<
	std::endl << "Please select 2 to see File data in hexadecimal or" <<
	std::endl << "Please select 3 to save a binary file or" <<
	std::endl << "Please select 9 to quit" << std::endl;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		getline(q4File, line);

		std::cout << line;

		q4File.close();

		break;

	case 2:
		getline(q4File, line);

		std::cout << "The Data in hexadecimal is: " << std::endl;
		
		for (int i = 0; i < line.size(); i++)
		{
			ctr = int(line[i]);
			std::cout << std::hex << ctr;
		}

		q4File.close();

	case 3:

		break;
	default:
		break;
	}
}

void LectPrg04_06()
{
	int size = 0;

	char arrA[] = { 'a','e','i','o','u' };
	char arrB[] = { 'T','A','B','L','R' };

	char arrC[sizeof(arrA) + sizeof(arrB) + 1] = {};

	for (int j = 0; j < sizeof(arrA); j++)
	{
		arrA[j] = arrC[j];
	}
	arrC[sizeof(arrA)] = ' ';
	for (int j = 0; j < sizeof(arrB); j++)
	{
		arrB[j] = arrC[j];
	}
	std::cout << "The merged array is:" << std::endl;
	for (int j = 0; j < sizeof(arrC); j++)
	{
		std::cout << arrC[j];
	}


}