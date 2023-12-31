#include <stdio.h>

int main()
{
    int i,sum=0,fact,reminder,num;

    printf("Enter a integer number >>> ");
    scanf("%d",&num);

    int temp = num;

    while(num!=0)
    {
        fact = 1;
        reminder=num%10;
        for(i=1; i<=reminder; i++)
        {
            fact = fact*i;
        }
        sum = sum +fact;
        num = (num-reminder)/10;
    }

    if (temp==sum)
    {
        printf("%d is a strong number",temp);
    }
    else
    {
        printf("%d is not a strong number",temp);
    }



    return 0;
}
