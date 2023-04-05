#include <stdio.h>

void separateEvenOdd(int arr[], int size, int evenArr[], int oddArr[], int* evenSize, int* oddSize) {
    *evenSize = 0;
    *oddSize = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            evenArr[*evenSize] = arr[i];
            (*evenSize)++;
        }
        else {
            oddArr[*oddSize] = arr[i];
            (*oddSize)++;
        }
    }
}

int main() {
    int arr[] = {5, 8, 1, 3, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenArr[size], oddArr[size];
    int evenSize, oddSize;

    separateEvenOdd(arr, size, evenArr, oddArr, &evenSize, &oddSize);

    printf("Original array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Even array: ");
    for(int i = 0; i < evenSize; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    printf("Odd array: ");
    for(int i = 0; i < oddSize; i++) {
        printf("%d ", oddArr[i]);
    }
    printf("\n");

    return 0;
}

