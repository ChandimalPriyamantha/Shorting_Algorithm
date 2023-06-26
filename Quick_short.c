#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    int j;

    for (j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int arr[15];
    int i, size;
    printf("\n\t------- Quick sorting -------\n\n");
    printf("Enter total number of elements (maximum 15): ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, size - 1);

    printf("\n\t------- After Quick sorted -------\n\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

