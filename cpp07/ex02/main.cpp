#include "Array.hpp"

int main(int, char**)
{
    try {
        // Creating an empty array
        Array<int> emptyArray;
        std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

        // Creating an array of 5 elements initialized by default
        Array<int> intArray(5);
        std::cout << "Size of intArray: " << intArray.size() << std::endl;

        // Assigning values to the elements of intArray
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            intArray[i] = i + 1;
        }

        // Copying intArray to another array
        Array<int> copyArray = intArray;

        // Modifying the copy should not affect the original array
        copyArray[0] = 100;

        // Displaying the elements of intArray
        std::cout << "Elements of intArray: ";
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        // Displaying the elements of copyArray
        std::cout << "Elements of copyArray: ";
        for (unsigned int i = 0; i < copyArray.size(); ++i) {
            std::cout << copyArray[i] << " ";
        }
        std::cout << std::endl;

        // Accessing an out-of-bounds element should throw an exception
        std::cout << "Accessing an out-of-bounds element: ";
        try {
            int value = intArray[10];
            std::cout << "Value: " << value;
        } catch (const std::exception& e) {
            std::cout << "Exception: " << e.what();
        }
        std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}