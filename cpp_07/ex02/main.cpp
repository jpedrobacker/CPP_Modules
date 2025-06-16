#include "Array.hpp"

int main()
{
    try
    {
        Array<int> intArray(5);
        for (std::size_t i = 0; i < intArray.getSize(); ++i)
            intArray[i] = i * 2;

        for (std::size_t i = 0; i < intArray.getSize(); ++i)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;

        Array<int> copyArray = intArray;
        for (std::size_t i = 0; i < copyArray.getSize(); ++i)
            std::cout << copyArray[i] << " ";
        std::cout << std::endl;

        std::cout << "Trying to access out of bounds index:" << std::endl;
        std::cout << intArray[10] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
