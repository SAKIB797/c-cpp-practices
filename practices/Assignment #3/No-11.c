#include <stdio.h>
int main()
{
    int rows, i, j, num = 1;
    rows = 4;

    for (i = 1; i <= rows; i++)
    {

        for (j = 1; j <=((rows*2)-1)/2; j++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
