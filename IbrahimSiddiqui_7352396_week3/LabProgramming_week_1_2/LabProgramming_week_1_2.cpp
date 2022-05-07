#include <iostream>
#include <iomanip>

void Lab02_03();
void Lab02_06();
void Lab02_08();


int main()
{
   //Lab02_03();
   //Lab02_06();
   Lab02_08();
}

void Lab02_03()
{
    double myDouble = 27.1234;
    double* ptr = &myDouble;
    std::cout << myDouble << std::endl;
    (*ptr)++;
    std::cout << *ptr << std::endl;
}
 
void Lab02_06() {


    std::cout << "   *|    1    2    3    4    5    6    7    8    9   10" << std::endl;
    std::cout << "----+--------------------------------------------------" << std::endl;

    for (int i = 1; i <= 10; i++)
    {
        std::cout << std::setw(4) << i << "|";

        for (int j = 1; j <= 10; j++)
        {
        std::cout << std::setw(5) << i * j;
        }
        std::cout << std::endl;
    }
}

void Lab02_08()
{
    int temp = 0;
    int n;
    std::cout << "Please enter the number of asteroids" << std::endl;
    std::cin >> n;

    int *inp = new int(n);


    std::cout << "Please enter the direction and size of the Asteroid" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> inp[i];
    }
    int* out = new int(n);
    for (int l = 0; l <n; l++)
    {

        inp[l] = temp;
        temp = out[l];
        std::cout << inp[l]<< std::endl;
        std::cout << temp << std::endl;
        std::cout << out[l] << std::endl;

    }


    //for (int i = 0; i<n; i++)
    //{
    //    if (inp[i] > 0 && inp[i + 1] > 0)
    //    {
    //        inp[i] = out[i];
    //    }
    //    else if (inp[i] < 0 && inp[i + 1] < 0)
    //    {
    //        inp[i] = out[i];
    //        
    //    }
    //}

    //for (int i = 0; i < n; i++)
    //{
    //    std::cout << out[i]
    //}

}