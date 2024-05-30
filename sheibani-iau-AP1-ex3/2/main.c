#include <stdio.h>

int main()
{
    int n;
    printf("enter the index of fibonacci you want: ");
    scanf("%d", &n);
    printf("the [%d]th element in fibonacci is %d \n", n, fib(n));
}

int fib(int n)
{
    int a1, a2 = 1;
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}