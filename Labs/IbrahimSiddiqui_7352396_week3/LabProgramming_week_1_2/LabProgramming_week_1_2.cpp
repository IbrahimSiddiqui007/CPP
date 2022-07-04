#include <iostream>
#include <iomanip>
#include <vector>

void Lab01_01();
void Lab02_03();
void Lab02_06();
void Lab02_08();


int main()
{
   std::cout << "Lab01_01" << std::endl << std::endl;
   Lab01_01();
   std::cout << std::endl << std::endl;
   std::cout << "Lab02_03" << std::endl << std::endl;
   Lab02_03();
   std::cout << std::endl << std::endl;
   std::cout << "Lab02_06" << std::endl << std::endl;
   Lab02_06();
   std::cout << std::endl << std::endl;
   std::cout << "Lab02_06" << std::endl << std::endl;
   Lab02_08();
   std::cout << std::endl << std::endl;

}

void Lab01_01() 
{
    std::cout << std::setw(5) << "N" << std::setw(5) << "N^2" << std::setw(5) << "N^3" << std::endl;
    for (int i = 1; i <= 10; i++)
    {
        std::cout << std::setw(5) << i << std::setw(5) << pow(i,2) << std::setw(5) << pow(i,3) << std::endl;

    }
}
void Lab02_03()
{
    double myDouble = 27.1234;
    double* ptr = &myDouble;
    std::cout << myDouble << std::endl;
    (myDouble)++;
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
    int n;
    int input;
    std::vector<int> inp;
    std::vector<int> out;


    std::cout << "Please enter the number of asteroids" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Please enter the Direction and the size of the asteroids" << std::endl;
        std::cin >> input;
        inp.push_back(input); 
    }
    
    for (int i = 0; i < inp.size(); i++)
    {
        if (i != inp.size() - 1)
        {
            if (inp[i] > 0 && inp[i + 1] > 0)
            {
                out.push_back(inp[i]);
            }
            else if (inp[i] < 0 && inp[i + 1] < 0)
            {
                out.push_back(inp[i]);
            }
            else if (inp[i] < 0 && inp[i + 1] > 0)
            {
                out.push_back(inp[i]);
            }
            else if (inp[i] > 0 && inp[i + 1] < 0)
            {
                if ((inp[i] + inp[i + 1]) == 0)
                {

                }
                else if ((inp[i] + inp[i + 1]) > 0)
                {
                    out.push_back(inp[i]);
                }
                else if ((inp[i + 1] + inp[i]) < 0)
                {
                    out.push_back(inp[i+1]);
                }
            }
        }
        else
        {
            if (inp[i] > 0 && inp[i - 1] > 0)
            {
                out.push_back(inp[i]);
            }
            else if (inp[i] < 0 && inp[i - 1] < 0)
            {
                out.push_back(inp[i]);
            }
        }
        out.shrink_to_fit();

    }

    for (int i = 0; i < out.size(); i++)
    {
        if (i != out.size() - 1)
        {
            if (out[i] > 0 && out[i + 1] < 0)
            {
                if ((out[i] + out[i + 1]) == 0)
                {

                }
                else if ((out[i] + out[i + 1]) > 0)
                {
                    out.pop_back();
                }
                else if ((out[i + 1] + out[i]) < 0)
                {
                    out.erase(out.begin());
                }
            }
        }
        else
        {
          
        }
        out.shrink_to_fit();

    }


    std::cout << "[";
    for (int i = 0; i < out.size(); i++)
    {
        std::cout << out[i] << ", ";
    }
    std::cout << "]" << std::endl;

}