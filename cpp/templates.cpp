#include <iostream>


template <typename T, typename X, typename Y>
T sum(X a, Y b)
{
    std::cout << __PRETTY_FUNCTION__ << "   ";

    return a + b;
}


int main()
{   
    // int num;
    // std::cin >> num;
    // std::cout << "num: " << num << std::endl;

    // T sum(X, Y) [with T = int; X = float; Y = float]
    std::cout << sum<int, float, float>(5, 4) << std::endl;

    // T sum(X, Y) [with T = float; X = double; Y = double]
    std::cout << sum<float>(5.12, 4.23) << std::endl;

    // T sum(X, Y) [with T = double; X = double; Y = double]
    std::cout << sum<double>(5.12, 4.23) << std::endl;

    // std::cout << sum("abc", "bcs") << std::endl; // "abc" + "bcs" = "abcbcs"; const char* + const char*

    return 0;
}
