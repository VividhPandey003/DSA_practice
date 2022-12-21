// There is a recursive approach and obviously and iterative approach but we also have a faster recursive approach

#include <stdio.h>

int pow1(int m, int n);
int pow2(int m, int n);

// GeneralOne
int pow1(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return pow1(m, n - 1) * m;
}

// BetterOne
int pow2(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return pow2(m * m, n / 2);
    else
        return m * pow2(m * m, n / 2);
}

int main()
{
    printf("%d\n", pow1(2, 9));
    printf("%d\n", pow2(2, 9));
    return 0;
}