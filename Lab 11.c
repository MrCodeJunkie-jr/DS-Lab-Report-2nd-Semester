#include <stdio.h>

void extended_gcd(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return;
    }

    int x1, y1;
    extended_gcd(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
}

int main()
{
    int a, b, c;
    printf("Enter the coefficients for the Diophantine Equation: ");
    scanf("%d %d %d", &a, &b, &c);

    int x, y;
    int gcd = extended_gcd(a, b, &x, &y);
    if (c % gcd != 0)
    {
        printf("The Diophantine Equation has no integer solutions.\n");
    }
    else
    {
        x = x * c / gcd;
        y = y * c / gcd;
        printf("A solution to the Diophantine Equation is x = %d and y = %d.\n", x, y);
    }
    return 0;
}

