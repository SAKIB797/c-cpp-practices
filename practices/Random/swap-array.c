#include <stdio.h>
#include <ctype.h>
int main()
{
    int i, temp, n;

    printf("how many many number you want to input >>> ");
    scanf("%d", &n);
    int arr[n];

    /// taking the numbers as input
    printf("Input the numbers >>> ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    /// print the original array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    //// swapping the array numbers
    for (i = 0; i <= (n - 1) / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    /// print the swapped array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

char lowerr =f;
char upper = toupper(lower);
printf("%c",upper);


    return 0;
}
