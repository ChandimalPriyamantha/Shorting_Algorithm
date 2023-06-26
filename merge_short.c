#include <stdio.h>

void merge(int arr[], int min, int mid, int max) {
    int i, j, k;
    int n1 = mid - min + 1;
    int n2 = max - mid;

    int left[n1], right[n2];

    for (i = 0; i < n1; i++)
        left[i] = arr[min + i];
    for (j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = min;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int min, int max) {
    if (min < max) {
        int mid = min + (max - min) / 2;
        mergeSort(arr, min, mid);
        mergeSort(arr, mid + 1, max);
        merge(arr, min, mid, max);
    }
}

int main() {
    int arr[30];
    int i, size;
    printf("\n\t------- Merge sorting -------\n\n");
    printf("Enter total number of elements: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, size - 1);

    printf("\n\t------- After Merge sorted -------\n\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

