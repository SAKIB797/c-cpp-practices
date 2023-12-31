#include <stdio.h>
int main()
{
    float bio,math,che,eng,phy;
    printf("Enter the obtained numbers in Biology, Math, Chemistry, English and Physics >>> ");
    scanf("%f %f %f %f %f",&bio,&math,&che,&eng,&phy);
    float pmark=((bio+math+che+eng+phy)/500)*100;

    printf("The percentage of 5 subjects is %.2f%",pmark);
    return 0;
}
