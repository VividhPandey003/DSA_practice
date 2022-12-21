#include <stdio.h>

void fun(int n)
{
    if (n > 0)
    {
        printf("%d  ", n);
        fun(n - 1);
        fun(n - 1); // Tree recursion thus calling recursive function two times.
    }
}
int main()
{
    fun(3);
    return 0;
}