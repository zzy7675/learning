#include <iostream>
#include "Sales_item.h"

/*
* A program that reads a set of book sales transactions
* and writing each transactions to the standard output.
* Read from exercise1.20.txt
*/
int main()
{
    Sales_item item;
    while (std::cin >> item) {
        std::cout << item << std::endl;
    }
    return 0;
}