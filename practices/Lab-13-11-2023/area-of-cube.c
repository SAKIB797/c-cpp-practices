#include <stdio.h>


int main()
{   // declaring the variable
    int height, width, length,vol;

    // take user input
    printf("\nEnter the height, width and length >>> ");
    scanf("%d %d %d",&length,&width,&height);

    //calculate the volume
    vol=height*width*length;

    //print the value of volume
    printf("\nThe volume of the cube is %d\n",vol);

    return 0;
}
