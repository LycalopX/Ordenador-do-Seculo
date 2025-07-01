#include "constants.h"

void merge(int *vec, int start, int mid, int end, int *auxVec)
{
    for (int i = start; i <= end; i++)
    {
        auxVec[i] = vec[i];
    }

    int i = start;
    int j = mid + 1;
    int k = start;

    while ((i <= mid) && (j <= end))
    {
        if (auxVec[i] <= auxVec[j])
        {
            vec[k] = auxVec[i];
            i++;
        }
        else
        {
            vec[k] = auxVec[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        vec[k] = auxVec[i];
        i++;
        k++;
    }

    while (j <= end)
    {
        vec[k] = auxVec[j];
        j++;
        k++;
    }
}

void mergeSort(int *vec, int start, int end, int *auxVec)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        
        mergeSort(vec, start, mid, auxVec);
        mergeSort(vec, mid + 1, end, auxVec);
        merge(vec, start, mid, end, auxVec);
    }
}