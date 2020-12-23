#include <stdio.h>
int main()
{
    int i,n,num1=0,num2=1;
    int MaxNum;

    printf("Enter the MaxNum : ");
    scanf("%d",&n);
    printf("Fibonacci Series : \n");
    for (i=1;i<=n;++i)
    {
        printf("%5d",num1);
        MaxNum=num1+num2;
        num1=num2;
        num2=MaxNum;
    }
    return 0;
}
