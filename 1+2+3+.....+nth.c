#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Summation is= %d",sum);
}
