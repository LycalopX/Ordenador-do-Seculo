#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;

    *a = *b;
    *b = temp;
}

#endif