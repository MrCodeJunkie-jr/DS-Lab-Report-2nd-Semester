#include <stdio.h>
#include <stdlib.h>

void next_comb(int *comb, int n, int r) {
    int i = r - 1,j;
    while (i >= 0 && comb[i] == n - r + i) {
        i--;
    }
    if (i < 0) {
        return;
    }
    comb[i]++;
    for (j = i + 1; j < r; j++) {
        comb[j] = comb[j - 1] + 1;
    }
}

int main() {
    int n =2, r = 1,i;
    int comb[5] = {0, 1, 2,3};
    printf("Initial combination: { ");
    for (i = 0; i < r; i++) {
        printf("%d ", comb[i]);
    }
    printf("}\n");
    next_comb(comb, n, r);
    printf("Next combination: { ");
    for (i = 0; i < r; i++) {
        printf("%d ", comb[i]);
    }
    printf("}\n");
    return 0;
}
