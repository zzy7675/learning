#include <iostream>
#include "Sales_item.h"

/*
* A program that reads 2 Sales_item objects.
* exercise1.21.txt contains 2 objects that
* have the same ISBN.
*/
int main()
{
    Sales_item item1, item2;

    std::cin >> item1 >> item2;

    std::cout << item1 + item2 << std::endl;
    return 0;
}
