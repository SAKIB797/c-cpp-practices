#include <stdio.h>

int main()
{
    int i,sum=0;

    for (i=100; i<=200; i++)
    {

        if (i%9==0)
        {
            sum=sum+i;
            printf("%d ",i);
        }

    }
    printf("\nThe sum of those numbers which are dividable by 9 between 100 and 200 >>> %d",sum);

    return 0;
}
