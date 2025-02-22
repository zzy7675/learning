#include <iostream>

int main()
{
    int a = 0, b = 1;
    int *i_ptr = &a;

    std::cout << i_ptr << " " << *i_ptr << std::endl;

    // change the value of i_ptr, pointing to b
    i_ptr = &b;
    std::cout << i_ptr << " " << *i_ptr << std::endl;

    // change value a by pointer i_ptr
    *i_ptr = 1;
    std::cout << i_ptr << " " << *i_ptr << std::endl;
    return 0;
}
