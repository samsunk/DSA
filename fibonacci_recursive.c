#include <stdio.h>
int fibonacci(int n);
void main()
{
    int n, i;
    printf("Enter Total terms:\n");
    scanf("%d", &n);
    printf("Fibonacci series terms are:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", fibonacci(i));
    }
}
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}