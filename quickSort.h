#include "constants.h"

void quickSort(int *vec, int start, int end) {

    if (start >= end) {
        return;
    }

    int pivot = vec[end];

    int i = start - 1;
    for (int j = start; j < end; j++) {

        if (vec[j] < pivot) {
            i++;

            swap(&vec[j], &vec[i]);
        }
    }

    swap(&vec[i + 1], &vec[end]);

    quickSort(vec, start, i);
    quickSort(vec, i + 2, end);
}