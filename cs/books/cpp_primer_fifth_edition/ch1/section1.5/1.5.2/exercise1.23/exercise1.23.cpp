#include <iostream>
#include "Sales_item.h"

/*
* This program reads several transactions and
* counts how many transactions occur for
* each ISBN.
*
* Assume the input file that:
* transactions with same ISBN occur consecutively until
* a transaction with different ISBN occurs.
*
* Input file for this program is exercise1.23.txt.
*/
int main()
{
    Sales_item curr_trans, trans;
    int32_t count = 1;

    if (std::cin >> curr_trans) { // transaction exists
        while (std::cin >> trans) {
            if (curr_trans.isbn() == trans.isbn()) { // ISBN equal
                count++;
            } else {
                std::cout << curr_trans.isbn();
                std::cout << " occur ";
                std::cout << count;
                std::cout << " times.";
                std::cout << std::endl;
                curr_trans = trans;
                count = 1;
            }
        }
        std::cout << curr_trans.isbn()
                  << " occur "
                  << count
                  << " times."
                  << std::endl;
    } else {
        std::cout << "No Transactions" << std::endl;
        return -1;
    }
    return 0;
}
