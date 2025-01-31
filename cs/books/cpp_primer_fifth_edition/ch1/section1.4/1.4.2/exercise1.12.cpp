#include <iostream>

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    sum += i;

    std::cout << "Final value of sum is ";
    std::cout << sum;
    std::cout << std::endl;
    return 0;
}