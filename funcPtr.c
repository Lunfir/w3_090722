#include <stdio.h>

#define SIZE 3

void cat() {
    printf("meow\n");
}

void dog() {
    printf("bark\n");
}

void snake() {
    printf("fsssss\n");
}

int main() {
    void(*animals[])() = { &cat, &dog, &snake };

    // animals[0] = &cat;
    // animals[1] = &dog;
    // animals[2] = &snake;

    for (int i = 0; i < SIZE; i++) {
        animals[i]();
    }

    return 0;
}
