/*Temperature conversion(Celsius to Fahrenheit)*/
#include<stdio.h>
int main()
{
    double C,F;

    printf("Enter any temp. in Celsius : ");
    scanf("%lf",&C);

    F=1.8*C+32;
    printf("Temperature in Fahrenheit : %lf",F);

    return 0;
}
