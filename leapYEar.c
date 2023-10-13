#include <stdio.h>
int main()
{
    int year;
    printf("\nEnter the year: ");
    scanf("%d", &year);

    // statement for determining leap year
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        printf("\n>>>>> %d is a leap year\n", year);
    }
    else
    {
        printf("\n>>>>> %d is not leap year\n");
    }

    return 0;
}
