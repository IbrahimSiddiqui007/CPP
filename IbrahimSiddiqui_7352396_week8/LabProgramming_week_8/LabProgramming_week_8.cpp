#include <iostream>
#include <iomanip>
#include <vector>
#include <string>


void Lab08_01();
void Lab08_03();
void Lab08_09();
void Lab08_12();


int main()
{
    std::cout << "Lab 8 Starts Here" << std::endl;
    std::cout << std::endl;


    //std::cout << "Lab08_01" << std::endl;
    //Lab08_01();
    //system("Pause");
    //std::cout << std::endl;

    std::cout << "Lab08_03" << std::endl;
    Lab08_03();
    system("Pause");
    std::cout << std::endl;

    //std::cout << "Lab08_09" << std::endl;
    //Lab08_09();
    //system("Pause");
    //std::cout << std::endl;

    //std::cout << "Lab08_12" << std::endl;
    //Lab08_12();
    //system("Pause");
    //std::cout << std::endl;

}

void Lab08_01() 
{

}

void Lab08_03()
{
    std::vector<int> v1(10);

    for (int i = 0; i < 10; i++)
    {
        v1.at(i) = i;
    }

    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << std::setw(2);
        std::cout << v1.at(i);
    }
    std::cout << std::endl;
}

void Lab08_09()
{

}

void Lab08_12()
{
    /*
    * The order would be (14,40) , (17,3) , (20,10)
    * This is because maps order by the first data type whether it be
    * alphabetically if its a string/char or numerically if its a 
    * int, double or float.
    */
}
