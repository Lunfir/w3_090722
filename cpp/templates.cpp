#include <iostream>


template <typename T>
T sum(T a, T b)
{
    std::cout << __PRETTY_FUNCTION__ << "   ";

    return a + b;
}


int main()
{   
    // int num;
    // std::cin >> num;
    // std::cout << "num: " << num << std::endl;

    std::cout << sum<int>(5, 4) << std::endl;
    std::cout << sum<float>(5.12, 4.23) << std::endl;
    std::cout << sum<double>(5.12, 4.23) << std::endl;

    // std::cout << sum("abc", "bcs") << std::endl; // "abc" + "bcs" = "abcbcs"; const char* + const char*

    return 0;
}
