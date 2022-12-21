// When more than one functions are present and they call each other in a cyclic fashion then it is an indirect recursion

#include <stdio.h>

// Function Declaration
void funA(int n);
void funB(int n);

void funA(int n)
{
    if (n > 0)
    {
        printf("%d  ", n);
        funB(n - 1);
    }
}
void funB(int n)
{
    if (n > 0)
    {
        printf("%d  ", n);
        funA(n / 2);
    }
}
int main()
{
    funA(20);
    return 0;
}