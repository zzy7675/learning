#include <iostream>

int main()
{
    int val;
    int sum = 0;

    std::cout << "Enter a series of integers:";
    std::cout << std::endl;

    while (std::cin >> val) {
        sum += val;
    }

    std::cout << "Sum of this series of integers is ";
    std::cout << sum;
    std::cout << std::endl;
    return 0;
}