#include "constants.h"

void quickSort(int *vec, int start, int end) {
    int pivot = start;

    if (start >= end) {
        return;
    }

    for (int i = start + 1; i <= end; i++) {
        if (vec[i] < vec[pivot]) {
            swap(&vec[pivot + 1], &vec[i]);
            swap(&vec[pivot], &vec[pivot + 1]);

            pivot++;
        }
    }

    quickSort(vec, start, pivot - 1);
    quickSort(vec, pivot + 1, end);
}