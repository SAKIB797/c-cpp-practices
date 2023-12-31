#include <stdio.h>

int main()
{
    int n1,n2,reminder;
    printf("Enter two number (first number must be getter than second) >>> ");
    scanf("%d %d",&n1,&n2);

   int  num1 =n1,num2=n2;


    while(reminder!=0){

        reminder=n1%n2;
        n1=n2;
        n2=reminder;

    }

    printf("The GCD is %d\n",n1);
    printf("The LCM is %d",(num1*num2)/n1);




    return 0;
}
