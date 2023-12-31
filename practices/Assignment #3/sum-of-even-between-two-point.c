#include <stdio.h>

int main()
{
    int a,b,sum=0,i;
    printf("Input two number >>> ");
    scanf("%d %d",&a,&b);

    for (i=a; i<=b; i++)
    {

        if (i%2==0)
        {
            sum=sum+i;
        }

    }
    printf("%d",sum);

    return 0;
}
