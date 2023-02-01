#include <stdio.h>

// Function to compute (x^y) mod n
long long int modular_exponentiation(long long int x, long long int y, long long int n)
{
    long long int res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % n;
        x = (x * x) % n;
        y >>= 1;
    }
    return res;
}

int main()
{
    long long int x = 2, y = 3, n = 5;
    printf("%lld^%lld mod %lld is %lld\n", x, y, n, modular_exponentiation(x, y, n));
    return 0;
}

