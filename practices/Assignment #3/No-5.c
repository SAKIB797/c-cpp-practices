#include <stdio.h>
int main()
{
    int sum_while=0,sum_for=0,first,second,i=1,n;

    printf("Input n >>> ");
    scanf("%d",&n);

/////////////////////////with for loop/////////////////////////
    for (i=1; i<=n; i++)
    {
        first= i+1;
        second=i+2;
        sum_for = sum_for +(first*second);

    }

///////////////////////////////with while loop/////////////////////////////////////
    first=0,second=0,i=1;
    while (i<=n)
    {
        first= i+1;
        second=i+2;
        sum_while = sum_while +(first*second);
        i++;
    }

    printf("By for loop >>> %d\n",sum_for);
    printf("By while loop >>> %d",sum_while);

    return 0;
}
