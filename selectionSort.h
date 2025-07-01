#include "constants.h"

void selectionSort(int *vec, int sentinel)
{
    if (!sentinel) {
        return;
    }

    int largest = 0;

    for (int i = 0; i < sentinel; i++)
    {
        if (vec[largest] < vec[i])
        {
            largest = i;
        }
    }

    swap(&vec[largest], &vec[sentinel]);

    selectionSort(vec, sentinel - 1);

    return;
}