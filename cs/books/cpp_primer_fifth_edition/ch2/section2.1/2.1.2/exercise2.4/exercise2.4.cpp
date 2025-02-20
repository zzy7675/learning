#include <iostream>
#include <cstdint>

int main()
{
    unsigned u = 10, u2 = 42; 
    std::cout << u2 - u << std::endl;   // prints out 32
    std::cout << u - u2 << std::endl;   // prints out 4294967264 due to wrap-around(overflow)
     
    int i = 10, i2 = 42; 
    std::cout << i2 - i << std::endl;   // prints out 32
    std::cout << i - i2 << std::endl;   // prints out -32
     
    std::cout << i - u << std::endl;    // prints out 0
    std::cout << u - i << std::endl;    // prints out 0
    return 0;
}
