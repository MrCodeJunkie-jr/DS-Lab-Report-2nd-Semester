#include <stdio.h>

void extendedEuclideanAlgorithm(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return;
    }
    int x1, y1;
    extendedEuclideanAlgorithm(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
}

int main() {
    int a, b, x, y, gcd;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    extendedEuclideanAlgorithm(a, b, &x, &y);
    gcd = a * x + b * y;
    printf("gcd(%d, %d) = %d = %d * %d + %d * %d\n", a, b, gcd, a, x, b, y);
    return 0;
}
