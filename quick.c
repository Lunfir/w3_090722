#include <stdio.h>

#define SIZE 8


void printPart(int array[], int lo, int hi) {
    for (int i = lo; i < hi; i++) {
        printf("%d_", array[i]);
    }
    printf("%d\n", array[hi]);
}

void print(int array[], int size) {
    int limit = size - 1;

    for (int i = 0; i < limit; i++) {
        printf("%d_", array[i]);
    }
    printf("%d\n", array[limit]);
}


int partition(int array[], int lo, int hi) {
    int mid = (lo + hi) / 2;

    // swap arr[lo] and pivot
    int pivot = array[mid];
    array[mid] = array[lo];
    array[lo] = pivot;

    int pivotIndex = lo;
    int iterIndex = pivotIndex + 1;

    // check elements
    for ( ; iterIndex <= hi; iterIndex++) {
        if (array[iterIndex] < array[lo]) {
            pivotIndex += 1;

            pivot = array[iterIndex];
            array[iterIndex] = array[pivotIndex];
            array[pivotIndex] = pivot;
        }
    }

    // put pivot in it's place
    pivot = array[pivotIndex];
    array[pivotIndex] = array[lo];
    array[lo] = pivot;

    return pivotIndex;
}

void quickSort(int array[], int lo, int hi) {
    int pivotIndex;

    if (lo >= hi) {
        return;
    }

    pivotIndex = partition(array, lo, hi);
    printf("pivot: %d\n", array[pivotIndex]);
    printPart(array, lo, hi);

    quickSort(array, lo, pivotIndex-1);
    quickSort(array, pivotIndex+1, hi);
}

int main() {
    int array[] = { 23, 31, 1, 10, 12, 8, 9, 14 };

    print(array, SIZE);

    quickSort(array, 0, SIZE-1);

    print(array, SIZE);

    return 0;
}
