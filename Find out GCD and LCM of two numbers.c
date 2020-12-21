/*C programming Example: Find out GCD and LCM of two numbers*/
#include<stdio.h>
int main()
{
    int num1,num2,i,gcd,lcm;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    for(i=1;i<=num1&&i<=num2;++i)
    {
        if(num1%i==0&&num2%i==0)
            gcd=i;
            lcm=(num1*num2)/gcd;
    }
    printf("Greatest Common Divisor (GCD) is : %d\n",gcd);
    printf("Least Common Multiple (LCM) is : %d",lcm);

    return 0;
}
