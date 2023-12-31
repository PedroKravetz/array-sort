#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

void bubbleSort(int *array, int n){
    int aux;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (array[j] > array[j + 1]){
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }
}

void selectionSort(int *array, int n)
{
    int aux;
    int pos;
    for (int i = 0; i < n; i++){
        pos = i;
        for (int j = i; j < n; j++){
            if (array[j] < array[pos]){
                pos = j;
            }
        }
        if (pos != i){
            aux = array[i];
            array[i] = array[pos];
            array[pos] = aux;
        }
    }
}

void insertionSort(int *array, int n){
    int key;
    int j;
    for (int i = 1; i < n; i++){
        key = array[i];
        j=i-1;
        while (j > -1 && array[j] > key){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main()
{
    srand(time(NULL));
    int *array, *array1, *array2, *array3;
    array = malloc(SIZE * sizeof(int));
    printf("Original Array: \n");
    for (int i = 0; i < SIZE; i++){
        array[i] = rand();
        printf("%d ", array[i]);
    }
    array1 = array;
    array2 = array;
    array3 = array;
    printf("\n");
    bubbleSort(array1, SIZE);
    printf("Sorted Array: \n");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");
    insertionSort(array2, SIZE);
    printf("Sorted Array: \n");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", array2[i]);
    }
    printf("\n");
    selectionSort(array3, SIZE);
    printf("Sorted Array: \n");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", array3[i]);
    }
    return 0;
}