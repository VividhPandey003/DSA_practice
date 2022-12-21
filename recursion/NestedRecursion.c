// A nested recursion is the one in which the recursive function is passed as the parameter of the recursive call

#include <stdio.h>

int fun(int n);

int fun(int n)
{
    if (n > 100)
        return n - 10;
    else
        return fun(fun(n + 11));
}
int main()
{
    int r = 0;
    r = fun(95); // Output: 91
    printf("%d\n", r);
    return 0;
}
