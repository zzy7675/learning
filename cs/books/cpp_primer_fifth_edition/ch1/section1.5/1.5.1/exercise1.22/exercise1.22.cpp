#include <iostream>
#include "Sales_item.h"

/*
* Program that reads several transactions with same ISBN.
* Corresponding input file is exercise1.22.txt.
*/
int main()
{
    Sales_item total, item;

    if (std::cin >> total) {
        while (std::cin >> item) {
            if (total.isbn() == item.isbn()) { // ISBN equal
                total = total + item;
            } else {
                std::cout << item.isbn();
                std::cout << " is different from current ISBN ";
                std::cout << total.isbn();
                std::cout << std::endl;
                return -1; // ISBN unequal, return right away
            }
        }
        std::cout << "ISBN, total books, total sales, and average price are ";
        std::cout << total;
        std::cout << std::endl;
    } else {
        std::cout << "No Transactions" << std::endl;
        return -1;
    }
    return 0;
}
