#include <stdio.h>

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
    /// print the orginal array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    //// swaping the array numbers
    for (i = 0; i <= n / 2 - 1; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    /// print the swaped array
    for (i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}