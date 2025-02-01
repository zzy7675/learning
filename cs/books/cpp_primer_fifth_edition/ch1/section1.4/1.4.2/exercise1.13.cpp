#include <iostream>

int main()
{
    int sum = 0;
    // rewrite section 1.4.1 exercise 1.9
    for (int i = 50; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "Sum of 50 to 100 inclusive is ";
    std::cout << sum;
    std::cout << std::endl;

    // rewrite section 1.4.1 exercise 1.10
    for (int i = 10; i >= 0; --i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}