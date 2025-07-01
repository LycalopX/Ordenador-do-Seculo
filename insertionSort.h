#include "constants.h"

void insertionSort(int *vec, int size, int start) {
    if (size == start) {
        return;
    }

    for (int i = start; i > 0; i--) {
        if (vec[i - 1] > vec[i]) {
            swap(&vec[i - 1], &vec[i]);
            continue;
        }
        break;
    }

    start++;
    insertionSort(vec, size, start);
}