#include <stdio.h>

int main()
{
    int i,size,j;
    printf("Enter the size of arry >>> ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the numbers for array >>> ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
// 1 2  5 4 2 6 7
    for(i=0; i<size-1; i++)
    {

        for(j=i; j<size-1; j++)
        {
            if(arr[i]==arr[j+1])
            {
                for (int k = j+1 ; k<size-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
            }
        }


    }

    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
