#include<stdio.h>
int factorial(long n);
int main()
{
    long num;
    printf("Enter any number between (0-16): ");
    scanf("%ld",&num);

    long fact=factorial(num);
    printf("The factorial is : %ld",fact);
}
int factorial(long n)
{
    if(n==0)
        return 1;
    else
        return (n*factorial(n-1));
}
