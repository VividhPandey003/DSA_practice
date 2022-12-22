// This is an optimized approach where we changed the time complexity from quadratic fn to linear function O(n^2)-->O(n)

#include <stdio.h>

double e(int x, int n) // Recursion
{
    static double s = 1;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e(x, n - 1); // Tail Recursion
}

double eloop(int x, int n) // Iteration
{
    double s = 1;
    for (; n > 0; n--)
    {
        s = 1 + x * s / n;
    }
    return s;
}

int main()
{
    printf("%lf\n", e(1, 10));
    printf("%lf", eloop(1, 10));
    return 0;
}