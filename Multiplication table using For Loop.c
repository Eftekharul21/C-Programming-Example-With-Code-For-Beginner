#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any integer: ");
    scanf(" %d",&n);

    printf("\nMultiplication table of %d : ",n);
    printf("\n----------------------------\n");

    for(i=1;i<=10;i++)
    {
        printf("\t%d * %d = %d \n",n,i,i*n);
    }

    return 0;
}
