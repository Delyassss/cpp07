#include "Array.hpp"

int main()
{
    try
    {
        Array<std::string> arr(3);
        for (unsigned int i = 0; i < arr.size(); i++)
        {
            arr[i] = "hello" ;
            std::cout << "index = " << i << " value = " << arr[i] << std::endl;
        }
        Array<int> arr2(2);
        arr2[0] = 12;
        arr2[1] = 13;
        std::cout << "intger array size = " << arr2.size() << std::endl;
        std::cout << "integer arr2[0] = " << arr2[0] << std::endl;
        std::cout << "integer arr2[1] = " << arr2[1] << std::endl;

        Array<int> arr3;
        std::cout << "empty integer array size = " << arr3.size() << std::endl;
        std::cout << "empty integer arr3[0] = " << arr3[0] << std::endl; // this will throw an exception because arr3 is Null and you dereference it

        
        std::cout << "Fin de programme"<< std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}