#include <stdio.h>
int main()
{
    int n,limit,i;

    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter Upper limit: ");
    scanf("%d",&limit);

    printf("---------------------\n");
    for(i=1;i<=limit;++i)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
