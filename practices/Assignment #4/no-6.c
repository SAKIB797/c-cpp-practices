#include <stdio.h>

int main()
{

    int size, position, element;

    int array[] = {3,4,8,7,6,3,11,0};
    size = sizeof(array)/sizeof(array[0]);


    printf("Enter the position to delete the element: ");
    scanf("%d", &position);
    position--;

    // Check if the position is valid
    if (position < 0 || position > size)
    {
        printf("Invalid position\n");
        return 0;
    }

for (int i=position; i<size-1;i++){
    array[i]=array[i+1];

}
    size--;

    printf("Array after deletion:\n");
    for (int i = 0; i <size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
