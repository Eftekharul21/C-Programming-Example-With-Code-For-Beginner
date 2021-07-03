#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the Limit: ");
    scanf("%d",&n);

    printf("Even numbers (1-%d) are: \n",n);

    for(i=2;i<=n;i=i+2)
    {
        printf("%d",i);
    }

    return 0;
}
