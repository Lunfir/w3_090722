#include <iostream>


int sum(int a, int b)
{
    std::cout << __PRETTY_FUNCTION__ << "   ";

    return a + b;
}

float sum(float a, float b)
{
    std::cout << __PRETTY_FUNCTION__ << "   ";

    return a + b;
}

int main()
{   
    // int num;
    // std::cin >> num;
    // std::cout << "num: " << num << std::endl;

    std::cout << sum(5, 4) << std::endl;
    std::cout << sum(5.12f, 4.23f) << std::endl;


    return 0;
}
