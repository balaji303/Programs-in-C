//factorial of a  number using recursion

#include <stdio.h>
long int factorial(int n);
void main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d", &n);
    printf("factorial of %d is %d", n, factorial(n));
}
long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
