// Program for fibonacci series
// fibonacci series means a number in this series is sum of two number before.
#include <stdio.h>
int main()
{
    int i, n, sum, first = 0, second = 1;

    printf("\nWrite how many fibonacci number you want: ");
    scanf("%d", &n);
    printf("\n");
    printf(">>> %d %d ", first, second);
    for (i = 0; i < n - 2; i++)
    {
        sum = first + second;
        printf("%d ", sum);
        first = second;
        second = sum;
    }
    printf("\n");
    return 0;
}
