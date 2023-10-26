#include <stdio.h>
int main()
{
    int i, j, size;
    //// for taking input
    printf("\nInput the size of array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Input your numbers: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // outer loop
    for (i = 0; i < size - 1; i++)
    {
        // inner loop
        for (j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap array value
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // print sorted number
    printf("\nSorted numbers (small to big):");
    for (i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }

    // Biggest element of array
    printf("\nBiggest number: %d", arr[size - 1]);
    // smallest element of array
    printf("\nSmallest number: %d\n", arr[0]);

    return 0;
}