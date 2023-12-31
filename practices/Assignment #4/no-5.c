#include <stdio.h>
//Write a program to display the numbers divisible by 4 or 7 from a 2D array of integers and find the sum of those numbers as well.
int main()
{
    int i,j,sum=0;

   int  array[3][3] = { {1, 4, 2}, {3, 6, 8},{7,20,14} };

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (array[i][j]%7==0 || array[i][j]%4 ==0 )
            {
                printf("%d ",array[i][j]);
                sum =sum + array[i][j];
            }
        }
    }

    printf("\n%d",sum);

    return 0;
}
