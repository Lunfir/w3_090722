#include <stdio.h>

#define SIZE 4


typedef union
{
    int num;
    char str[SIZE];
} NumChar;

typedef struct
{
    int num;
    char str[SIZE];
} StructTest;


int main() {
    printf("size of union : %d\n", sizeof(NumChar));
    printf("size of struct: %d\n", sizeof(StructTest));

    NumChar uni;

    uni.num = 87;

    printf("uni.num: %d\n", uni.num);

    for (int i = 0; i < SIZE; i++) {
        printf("uni.str[%d]: %c\n", i, uni.str[i]);
    }

    return 0;
}