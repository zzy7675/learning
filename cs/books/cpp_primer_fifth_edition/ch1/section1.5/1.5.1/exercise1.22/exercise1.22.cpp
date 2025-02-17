#include <iostream>
#include "Sales_item.h"

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
            }
        }
        std::cout << "ISBN, total books, total sales, and average price are ";
        std::cout << total;
        std::cout << std::endl;
    } else {
        std::cout << "No Transactions" << std::endl;
    }
    return 0;
}
