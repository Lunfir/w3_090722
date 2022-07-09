#include <stdio.h>

#define SIZE 3

// 1
void cat() { 
    printf("meow\n");
}

// 2
void dog() {
    printf("bark\n");
}

// 3
void snake() {
    printf("fsssss\n");
}

typedef enum
{
    CAT     = 1,
    DOG     = 2,
    SNAKE   = 3
} Animals;


int main() {
    Animals animalID;

    printf("\nsizeof enum: %d\n", sizeof(Animals));

    scanf("%d", &animalID);

    // animalID = 43; ---> Wrong ID

    switch(animalID)
    {
        case CAT:
            cat();
            break;

        case DOG:
            dog();
            break;

        case SNAKE:
            snake();
            break;

        default:
            printf("Wrong ID");
            break;       
    }

    return 0;
}
