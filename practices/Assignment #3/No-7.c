#include <stdio.h>
#include <math.h>

int main()
{
    int i,reminder,newNum=0,num,digit;

    for(i=1; i<=10000; i++)
    {
        digit = 0;
        newNum=0;
        reminder = 0;

        num=i;
        while(num!=0)
        {
            digit = digit+1;
            num /= 10;
        }

      num = i;
        while (num>0)
        {
            reminder = num%10;
            newNum = newNum + pow(reminder,digit);
            num = (num-reminder)/10;
        }

        num = i;
        if(num == newNum)
        {
            printf("%d \n",num);
        }



    }


    return 0;
}
