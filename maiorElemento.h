// Apresente o pseudoc´odigo de um algoritmo que use o paradigma de divis˜ao e
// conquista para para encontrar o maior elemento em um vetor?

#include "constants.h"

int larger(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int maiorElemento(int *vec, int start, int end)
{

    int mid = start + (end - start) / 2;

    if (start < end)
    {

        return larger(maiorElemento(vec, start, mid), maiorElemento(vec, mid + 1, end));
    }
    else
    {
        return vec[start];
    }
}