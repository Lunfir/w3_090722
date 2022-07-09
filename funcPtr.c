#include <stdio.h>

#define SIZE 3

void cat(int food) {
    if (food < 2) {
         printf("MEOW MEOW MEOW\n");
    }
    else {
        printf("meow\n");
    }
}

void dog(int food) {
    printf("bark\n");
}

void snake(int food) {
    printf("fsssss\n");
}

void feed(void(*ptrFunc)(int), int food) {
    if (food < 10) {
        printf("Not enough food\n");
        
        return;
    }

    ptrFunc(food);
}

int main() {
    void(*animals[])(int) = { &cat, &dog, &snake };

    // animals[0] = &cat;
    // animals[1] = &dog;
    // animals[2] = &snake;

    for (int i = 0; i < SIZE; i++) {
        feed(animals[i], 42);
    }

    return 0;
}

// TODO: try to add sorting function  to bubble sort
// int criteria(int a, int b) {
//     if ( a < b && (a % 2 == 0))
//     {
//         return 1;
//     }

//     return 0;
// }
//  // pseudo-code
// void quickSort(int[], *criteria)