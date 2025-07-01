#include "constants.h"

void bubbleSort(int *vec, int sentinel) {

    int newSentinel = sentinel;

    for (int i = 1; i < sentinel; i++) {
        if (vec[i - 1] > vec[i]) {
            swap(&vec[i - 1], &vec[i]);
            newSentinel = i;
        }
    }

    if (newSentinel != sentinel) {
        bubbleSort(vec, newSentinel);
    }
    return;
}

