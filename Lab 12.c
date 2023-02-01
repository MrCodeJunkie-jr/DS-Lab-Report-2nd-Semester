#include <stdio.h>

// Function to perform binary addition
int binary_addition(int a, int b)
{
    int carry = 0, sum = 0, i;
    for (i = 0; i < 32; i++)
    {
        int a_bit = (a >> i) & 1;
        int b_bit = (b >> i) & 1;
        sum |= (a_bit ^ b_bit ^ carry) << i;
        carry = (a_bit & b_bit) | (a_bit & carry) | (b_bit & carry);
    }
    return sum;
}

// Function to perform binary multiplication
int binary_multiplication(int a, int b)
{
    int res = 0, i;
    for (i = 0; i < 32; i++)
    {
        if (b & 1)
            res = binary_addition(res, a << i);
        b >>= 1;
    }
    return res;
}

// Function to perform binary division
int binary_division(int a, int b)
{
    int res = 0, i;
    for (i = 31; i >= 0; i--)
    {
        res <<= 1;
        int divisor = b << i;
        if (a >= divisor)
        {
            a = binary_addition(a, ~divisor + 1);
            res |= 1;
        }
    }
    return res;
}

int main()
{
    int a = 9, b = 5;
    printf("Binary addition of %d and %d is %d\n", a, b, binary_addition(a, b));
    printf("Binary multiplication of %d and %d is %d\n", a, b, binary_multiplication(a, b));
    printf("Binary division of %d and %d is %d\n", a, b, binary_division(a, b));
    return 0;
}

