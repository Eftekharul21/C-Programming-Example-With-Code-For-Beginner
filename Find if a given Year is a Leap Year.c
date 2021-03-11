/*C program to check a given year is leap year or not*/
#include<stdio.h>
int main()
{
    int year;

    printf("Enter a year : ");
    scanf("%d",&year);

    if((year%400)==0)
        printf("%d is a leap year.",year);
    else if((year%100)==0)
        printf("%d is a not leap year.",year);
    else if((year%4)==0)
        printf("%d is a leap year.",year);
    else
        printf("%d is not a leap year.",year);

    return 0;
}
