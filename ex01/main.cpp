
#include "iter.hpp"
#include <ctime>
#include <cstdlib>


void f(int i)
{
    std::cout << i << std::endl;
}

void sortt(int *arr, int  size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void randomchar(std::string &str)
{
    char guess = rand() % 26;
    str = (guess + 97);
    std::cout << str << std::endl;
};


int main()
{
    srand(time(NULL));
    int arr[4] = {-2 , 40 , 1 , 0};

    ::iter(arr, 4, ::f);
    ::sortt(arr, 4);
    std::cout << "=======================" << std::endl;
    ::iter(arr, 4, ::f);

    std::string thiss[3] =
    {
        "yes",
        "no",
        "maybe"    
    };
    std::cout << "=======================" << std::endl;
    ::iter(thiss, 3, ::randomchar);
    return 0;
}