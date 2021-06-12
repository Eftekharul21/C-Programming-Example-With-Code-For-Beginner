#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any integer: ");
    scanf(" %d",&n);
    printf("\nMultiplication table of %d : ",n);
    printf("\n----------------------------\n");

    i=1;
    while(i<=10)
	{
		printf("\t%d * %d = %d \n",n,i,n*i);
        i++;
    }
    return 0;
}
