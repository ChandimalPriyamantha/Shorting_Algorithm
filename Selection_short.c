#include <stdio.h>

void selectionsort(int arr[], int num) {
    int i, j, min_idx;
    for (i = 0; i < num - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < num; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
    int num, i;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionsort(arr, num);

    printf("Sorted array in ascending order: ");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Sorted array in descending order: ");
    for (i = num - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

