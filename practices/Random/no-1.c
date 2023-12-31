#include <stdio.h>
int main()
{
    int i, j, size;
    float sum =0,avg;
    //// for taking input
    printf("\nInput the size of array: ");
    scanf("%d", &size);
    float arr[size];

    printf("Input your numbers: ");
    for (i = 0; i < size; i++)
    {
        scanf("%f", &arr[i]);
    }

    // outer loop
    for (i = 0; i < size - 1; i++)
    {
        // inner loop
        for (j = 0; j < size - 1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap array value
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

   for (i=0;i<size;i++){
     sum = sum + arr[i];
   }
   avg = sum / size;

  printf("Maximum value is %.2f.\nMinimum value is %.2f.\nThe average is %.2f.",arr[size-1],arr[0],avg);



    return 0;
}
