#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

int np(int arr[], int n) {
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    if (i < 0) {
        return 0;
    }

    int j = n - 1;
    while (arr[j] <= arr[i]) {
        j--;
    }

    swap(&arr[i], &arr[j]);
    reverse(arr, i + 1, n - 1);
    return 1;
}

int main() {
    int i;
	int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (!np(arr, n)) {
        printf("There are no more permutations.\n");
    } else {
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
