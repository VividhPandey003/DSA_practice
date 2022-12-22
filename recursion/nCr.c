// For finding nCr just use the factorial function. But for recursive approach we take help of the Pascal's Triangle
#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

int c(int n, int r)
{
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);
    return t1 / (t2 * t3);
}

// However for a recursive function:-

int comb(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    else
        return comb(n - 1, r - 1) + comb(n - 1, r);
}
int main()
{
    printf("%d  ", c(10, 2));
    printf("%d  ", comb(10, 2));
    return 0;
}