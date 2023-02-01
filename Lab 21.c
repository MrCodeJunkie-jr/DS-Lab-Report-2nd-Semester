#include <stdio.h>
#include <stdbool.h>

bool next_combination(int *combination, int n, int r) {
    int i = r - 1;
    while (i >= 0 && combination[i] == n - r + i) {
        i--;
    }
    if (i < 0) {
        return false;
    }
    combination[i]++;
    for (int j = i + 1; j < r; j++) {
        combination[j] = combination[j - 1] + 1;
    }
    return true;
}

int main() {
    int n = 5;
    int r = 3;
    int combination[r];
    for (int i = 0; i < r; i++) {
        combination[i] = i;
    }
    do {
        for (int i = 0; i < r; i++) {
            printf("%d ", combination[i] + 1);
        }
        printf("\n");
    } while (next_combination(combination, n, r));
    
    return 0;
}

