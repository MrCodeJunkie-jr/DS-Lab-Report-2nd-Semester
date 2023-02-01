#include <stdio.h>
#include <stdbool.h>

bool next_permutation(int *permutation, int n) {
    int i = n - 2;
    while (i >= 0 && permutation[i] >= permutation[i + 1]) {
        i--;
    }
    if (i < 0) {
        return false;
    }
    int j = n - 1;
    while (permutation[j] <= permutation[i]) {
        j--;
    }
    int temp = permutation[i];
    permutation[i] = permutation[j];
    permutation[j] = temp;
    i++;
    j = n - 1;
    while (i < j) {
        temp = permutation[i];
        permutation[i] = permutation[j];
        permutation[j] = temp;
        i++;
        j--;
    }
    return true;
}

int main() {
    int n = 3;
    int permutation[] = {1, 2, 3};
    do {
        for (int i = 0; i < n; i++) {
            printf("%d ", permutation[i]);
        }
        printf("\n");
    } while (next_permutation(permutation, n));
    
    return 0;
}

