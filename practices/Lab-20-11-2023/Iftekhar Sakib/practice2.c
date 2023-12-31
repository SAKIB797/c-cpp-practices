#include <stdio.h>
int main()
{
    float celsius;
    printf("Enter the temperature in celsius >>> ");
    scanf("%f",&celsius);

    float fahrenheit=(celsius*9/5)+32;

    printf("%.2f celsius is equal to %.2f fahrenheit",celsius,fahrenheit);

    return 0;
}

