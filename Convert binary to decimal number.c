/*C program to convert the binary number into decimal number*/
#include <stdio.h>
int main()
{
    int num,bin_num,deci_num=0,base=1,rem;

    printf("Enter a binary number : \n");
    scanf("%d", &num);

    bin_num=num;
    while(num>0)
    {
        rem=num%10;
        deci_num=deci_num+rem*base;
        num=num/10 ;
        base=base*2;
    }
    printf("Binary number is = %d \n",bin_num);
    printf("Decimal number is = %d \n",deci_num);
}
