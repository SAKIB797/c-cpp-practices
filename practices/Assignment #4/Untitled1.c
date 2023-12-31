#include <stdio.h>
#include <math.h>
int main()
{

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max = (a+b+abs(a-b))/2;
    max = (max+c+abs(max-c))/2;
    printf("%d eh o maior\n",max);
    return 0;
}
