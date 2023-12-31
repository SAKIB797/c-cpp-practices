#include <stdio.h>

int main()
{
    int n,revNum=0,reminder;
    printf("Input a number >>> ");
    scanf("%d",&n);
    int temp = n;
    while (n>0) {
        reminder = n % 10 ;
        revNum = revNum*10 + reminder;
        n = (n-reminder)/10;
    }
     printf("The reversed value of %d is %d",temp,revNum);

    return 0;
}
