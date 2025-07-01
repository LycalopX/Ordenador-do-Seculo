#include "bubbleSort.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "quickSort.h"
#include "mergeSort.h"

int main()
{

    srand(time(NULL));

    int size;

    printf("\nSeja bem-vindo. \nInsira o tamanho do vetor: ");

    scanf("%d", &size);
    int *vec = malloc(sizeof(int) * size);

    int loop = 1;

    while (loop)
    {
        printf("\nEscolha: \n\n0. Encerrar Programa \n1. BubbleSort\n2. InsertionSort\n3. SelectionSort \n4. QuickSort\n5. MergeSort\n\nInput: ");

        int choice = 0;
        scanf("%d", &choice);

        for (int i = 0; i < size; i++)
        {
            vec[i] = rand();
        }

        clock_t begin = clock();

        switch (choice)
        {
        case 1:
            bubbleSort(vec, size);
            break;

        case 2:
            insertionSort(vec, size, 0);
            break;

        case 3:
            selectionSort(vec, size - 1);
            break;

        case 4:
            quickSort(vec, 0, size - 1);
            break;

        case 5:
        {
            int *auxVec = malloc(sizeof(int) * size); // Corrigido: sizeof(int), não int *
            if (!auxVec)
            {
                printf("Erro de alocação.\n");
                break;
            }

            mergeSort(vec, 0, size - 1, auxVec);
            free(auxVec); // Liberação da memória após uso
        }
        break;

        case 0:
            loop = 0;
            printf("Obrigado por usar o programa.\n");
            break;
        }

        clock_t end = clock();
        double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

        for (int i = 0; i < size; i++) {
            printf("%d: %d\n", i, vec[i]);
        }

        printf("\n\nTime Spent: %lfs\n", time_spent);
    }
}