#include <stdio.h>

void foo() {
    printf("foo\n");
}

int bar(int a) {
    printf("bar: %d\n", a);

    return a;
}

int main() {
    // declaration void()
    void(*ptrFoo)();
    ptrFoo = &foo;

    // call syntax
    (*ptrFoo)();
    ptrFoo();

    // declaration int(int)
    int(*ptrBar)(int) = &bar;
    ptrBar(42);

    return 0;
}
