#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, fact=1,n;
    printf("\nFactorial of - ");
    scanf("%d",&n);
    // statement for calculate the factorial value
    for ( i = 1; i <= n; i++)
    {
        fact*=i;
    }
    printf("\nThe facetorial value of %d is %d",n,fact);

    return 0;
}
