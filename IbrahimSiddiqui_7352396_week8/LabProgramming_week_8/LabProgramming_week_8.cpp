#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

template <typename T>
void Lab08_01(std::vector<T>& vect1);
void Lab08_03();
template <typename T>
void Lab08_09(std::vector<T>& vect2);
void Lab08_12();


int main()
{
    std::cout << "Lab 8 Starts Here" << std::endl;
    std::cout << std::endl;


    std::cout << "Lab08_01" << std::endl;
    std::vector<int> vect1;
    Lab08_01(vect1);
    system("Pause");
    std::cout << std::endl;

    std::cout << "Lab08_03" << std::endl;
    Lab08_03();
    system("pause");
    std::cout << std::endl;

    std::cout << "Lab08_09" << std::endl;
    std::vector<int> vect2;
    vect2.push_back(10);
    vect2.push_back(20);
    Lab08_09(vect2);
    system("Pause");
    std::cout << std::endl;

    std::cout << "Lab08_12" << std::endl;
    Lab08_12();
    system("Pause");
    std::cout << std::endl;

}

template <typename T>
void Lab08_01(std::vector<T>& vect1)
{
    
    /*This is for testing*/
    vect1.push_back(10);
    vect1.push_back(20);
    

    std::cout << "The vector is ";

    for (int i = 0; i < vect1.size(); i++)
    {
        std::cout << vect1.at(i) << " ";
    }

    std::cout << std::endl;
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

template <typename T>
void Lab08_09(std::vector<T>& vect2)
{
    vect2.pop_back();
    std::cout << "The Vector is ";
    for (int i = 0; i < vect2.size(); i++)
    {
        std::cout << vect2.at(i);
    }
    std::cout << std::endl;

}

void Lab08_12()
{
    std::cout << "Please check the comments" << std::endl;
    /*
    * The order would be (14,40) , (17,3) , (20,10)
    * This is because maps order by the first data type whether it be
    * alphabetically if its a string/char or numerically if its a
    * int, double or float.
    */
}
