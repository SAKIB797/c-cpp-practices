#include <stdio.h>
int main()
{
    int i,j,a,b,flag;

    printf("Input two number >>> ");
    scanf("%d %d",&a,&b);

    // outer loop
    for (i=a; i<=b; i++)
    {
        flag=0;

        // inner loop
        for(j=2; j<i; j++)
        {
            if (i%j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d ",i);
        }

    }

    return 0;
}
