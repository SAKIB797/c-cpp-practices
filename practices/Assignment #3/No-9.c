#include <stdio.h>

int main()
{

    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
    case 8:
        printf("Grade: A+\n");
        break;
    case 7:
        printf("Grade: A\n");
        break;
    case 6:
        printf("Grade: A-\n");
        break;
    case 5:
        printf("Grade: B\n");
        break;
    case 4:
        printf("Grade: C\n");
        break;
    default:
        printf("Grade: F\n");
    }

    return 0;
}
