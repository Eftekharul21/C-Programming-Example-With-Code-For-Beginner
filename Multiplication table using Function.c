#include<stdio.h>

void print_mul_table(int n);

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    print_mul_table(num);
}

void print_mul_table(int n)
{
    int i;
    printf("Multiplication Table for %d :\n",n);

    for(i=1;i<=10;i=i+1)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
