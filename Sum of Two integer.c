/* This is the example of summation of two integer using user inputs*/
#include<stdio.h>
int main()
{
    int a,b,sum;

    printf("Enter the value of first number : ");
    scanf("%d",&a);

    printf("Enter the value of Second number : ");
    scanf("%d",&b);

    sum=a+b;
    printf("The Sum of two numbers : %d",sum);

    return 0;
}
