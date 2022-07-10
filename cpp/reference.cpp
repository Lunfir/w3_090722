#include <iostream>

// by value
// void foo(int num)
// {
//     num += 1;
//     std::cout << __PRETTY_FUNCTION__ << ": " << num << std::endl;
// }

// by pointer
void foo(int* num)
{
    *num += 1;
    std::cout << __PRETTY_FUNCTION__ << ": " << *num << std::endl;
}

// by reference
void foo(int& num)
{
    num += 1;
    std::cout << __PRETTY_FUNCTION__ << ": " << num << std::endl;
}


int main()
{
    int a = 42;

    // initialization
    int* ptr;
    ptr = &a;

    int& ref = a;

    // address arithm
    std::cout << "ptr before: " << (unsigned long long)ptr << std::endl;
    ptr += 1;
    std::cout << "ptr after : " << (unsigned long long)ptr << std::endl;
    std::cout << "*ptr      : " << *ptr << std::endl;

    std::cout << "ref before: " << ref << std::endl;
    ref += 1;
    std::cout << "ref after : " << ref << std::endl;

    // relationship
    int b = 123;
    ptr = &b;
    std::cout << "ptr = &b, a: " << a << std::endl;

    std::cout << "Before : " << std::endl;
    std::cout << "a     : " << a << std::endl;
    std::cout << "ref   : " << ref << std::endl;
    std::cout << "b     : " << b << std::endl;
    ref = b; // a = b;
    std::cout << "After : " << std::endl;
    std::cout << "a     : " << a << std::endl;
    std::cout << "ref   : " << ref << std::endl;
    std::cout << "b     : " << b << std::endl;

    foo(&a); // by pointer
    std::cout << "after foo(&a) : " << a << std::endl;

    foo(a); // by reference
    std::cout << "after foo(a)  : " << a << std::endl;

    return 0;
}
