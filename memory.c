#include <stdio.h>
#include <stdlib.h>

void memoryLeak(unsigned long* num) {
    int* initHelper = (int*)malloc(sizeof(int) * 10000000);

    if (initHelper == NULL) {
        printf("Helper ptr is NULL\n");

        return;
    }

    *num = (unsigned long)initHelper;

    free(initHelper);
}


int main()
{
    // stack
    int stackVar = 12;
    int* stackPtr = &stackVar;

    // heap
    int* heapVar = (int*)malloc(sizeof(int)/* * 10000000000*/);

    printf("stack ptr: %llu\n", stackPtr);
    printf("heap ptr : %llu\n", heapVar);

    if (heapVar == NULL) {
        printf("Heap ptr is NULL\n");

        return 0;
    }

    *heapVar = 234;

    free(heapVar);

    // memory leak
    unsigned long foo;
    for (int i = 0; i < 1000; i++) {
        memoryLeak(&foo);
        printf("foo: %lu\n", foo);
    }

    return 0;
}
