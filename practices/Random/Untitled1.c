#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;
    printf("Enter a number ");
    scanf("%d",&n);

    for(i=1; i<=3; i++ )
    {
        int power =    pow(n,i);
        printf("%d ",power);
    }

    return 0;
}
