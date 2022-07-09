#include <stdio.h>

#define SIZE 5

void fill(int mat[SIZE][SIZE]) {
    for (int col = 0; col < SIZE; col++) {
        for (int row = 0; row < SIZE; row++) {
            mat[col][row] = row;
        }
    }
}

void print(int mat[SIZE][SIZE], int size) {
    int limit = SIZE - 1;

    for (int col = 0; col < SIZE; col++) {
        for (int row = 0; row < limit; row++) {
            printf("%d_", mat[col][row]);
        }
        printf("%d\n", mat[col][limit]);
    }
}

int main()
{
    int mat[SIZE][SIZE];

    fill(mat);
    print(mat, SIZE);

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%llu  %d\n", &mat[j][i], mat[j][i]);
        }        
    }

    return 0;
}

