#include <stdio.h>

// Basic-Generalized Approach for finding fibonacci
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int F[10];

// Optimized Approach that uses the concept of Memoization for finding Fibonacci
int fibopt(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = fibopt(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = fibopt(n - 1);
        return F[n - 1] + F[n - 2];
    }
}
int main()
{
    int i = 0;
    for (i = 0; i < 10; i++)
        F[i] = -1;
    printf("%d  \n", fib(6));
    printf("%d  \n", fibopt(6));
    return 0;
}