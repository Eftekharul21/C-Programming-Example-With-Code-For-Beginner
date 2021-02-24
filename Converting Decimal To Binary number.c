// C program to converting decimal number into Binary number
#include<stdio.h>
int main()
{
    int decnum,binnum=0,mul=1,rem;
    printf("Enter any decimal number: ");
    scanf("%d",&decnum);

    while(decnum>0)
    {
        rem=decnum%2;
        binnum=binnum+(rem*mul);
        mul=mul*10;
        decnum=decnum/2;
    }
    printf("The Binary number is: %d\n",binnum);
    return 0;
}
