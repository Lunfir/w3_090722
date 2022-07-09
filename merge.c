#include <stdio.h>

#define SIZE 7

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int tmp[size];
    int k = 0;
    int j = mid;
    int i = lo;

    // per-element comparison
    for ( ; i < mid && j < hi; k++) {
        if (array[i] < array[j]) {
            tmp[k] = array[i];
            i += 1;
        } else {
            tmp[k] = array[j];
            j += 1;
        }
    }

    // tails
    for ( ; j < hi; j++, k++ ) {
        tmp[k] = array[j];
    }

    for ( ; i < mid; i++, k++ ) {
        tmp[k] = array[i];
    }

    // copy array
    for ( k = 0; k < size; k++, lo++) {
        array[lo] = tmp[k];
    }
}

void printPart(int array[], int lo, int hi) {
    int limit = hi - 1;

    for (int i = lo; i < limit; i++) {
        printf("%d_", array[i]);
    }
    printf("%d\n", array[limit]);
}

void mergeSort(int array[], int lo, int hi) {
    int mid = (lo + hi) / 2;

    printf("mid = %d\n", mid);
    printPart(array, lo, hi);

    if (lo == mid) {
        return;
    }

    mergeSort(array, lo, mid);
    mergeSort(array, mid, hi);
    merge(array, lo, mid, hi);
}


void print(int array[], int size) {
    int limit = size - 1;

    for (int i = 0; i < limit; i++) {
        printf("%d_", array[i]);
    }
    printf("%d\n", array[limit]);
}

int main()
{
    int array[] = { 2, 3, 1, 54, 12, 8, 9 };

    mergeSort(array, 0, SIZE);

    print(array, SIZE);

    return 0;
}
