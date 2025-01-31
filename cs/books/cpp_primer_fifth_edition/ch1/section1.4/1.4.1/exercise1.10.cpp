#include <iostream>

int main()
{
    int val = 10;
    // print numbers 10 to 0 inclusive
    while (val >= 0) {
        std::cout << val << " ";
        --val;
    }
    std::cout << std::endl;
    return 0;
}