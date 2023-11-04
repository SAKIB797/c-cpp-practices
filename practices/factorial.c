#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, fact = 1, n;

    // take the integer for its factorial
    printf("\nFactorial of - ");
    scanf("%d", &n);

    // statement for calculating the factorial value
    for (i = 1; i <= n; i++)
    {
        if (n < 0)
        {
            break;
        }

        fact *= i;
    }

    // print the factorial value
    if (n < 0)
    {
        printf("\n>>> The factorial of %d is undefined\n", n);
    }
    else
    {
        printf("\n>>> The factorial of %d is %d\n", n, fact);
    }

    return 0;
}