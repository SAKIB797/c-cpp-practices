#include <stdio.h>

int main()
{
    int arr1[] = {1, 3, 5, 7, 9,11,15,30,40};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mArray[size1 + size2];

    int i = 0, j = 0, k = 0;


    for (i=0,j =0 ; i <size1 && j < size2 ; i++, j++)
    {

        if (arr1[i]<arr2[j])
        {
            mArray[k]=arr1[i];
            mArray[k+1] = arr2[j];
            k=k+2;
        }
        else
        {
            mArray[k]=arr2[j];
            mArray[k+1] = arr1[i];
            k=k+2;
        }

    }

    while (i<size1)
    {
        mArray[k]=arr1[i];
        k++;
        i++;
    }
    while (j<size2)
    {
        mArray [k] = arr2[i];
        k++;
        i++;
    }

    printf("Merged Array: ");
    for ( i = 0; i < size1 + size2; i++)
    {
        printf("%d ", mArray[i]);
    }

    return 0;
}
