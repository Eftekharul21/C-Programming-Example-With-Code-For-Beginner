/*
    C Program to Convert Binary number into Hexadecimal Number
 */
#include<stdio.h>
int main()
{
    long int bin_num,hex_num=0,i=1,rem;

    printf("Enter any binary number: ");
    scanf("%ld",&bin_num);

    while(bin_num!=0)
    {
        rem=bin_num%10;
        hex_num=hex_num+rem*i;
        i=i*2;
        bin_num=bin_num/10;
    }
    printf("Hexadecimal Number is: %lX",hex_num);
    return 0;
}
