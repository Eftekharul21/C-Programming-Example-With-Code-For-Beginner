/* C Program to Convert Binary to Octal number */

#include<stdio.h>
int main()
{
    long int bin_num,oct_num=0,j=1,rem;

    printf("Enter any binary number: ");
    scanf("%ld",&bin_num);

    while(bin_num!=0)
    {
        rem=bin_num%10;
        oct_num=oct_num+rem*j;
        j=j*2;
        bin_num=bin_num/10;
    }

    printf("The Octal number is: %lo\n",oct_num);
    return 0;
}
