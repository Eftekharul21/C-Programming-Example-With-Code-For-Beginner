#include<stdio.h>
int main()
{
	int i,j,n;
	printf("How many lines: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
        printf("  ");
        for(j=1;j<=i;j++)
		printf("%4c",i+64);
		printf("\n");
	}
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        printf("  ");
        for(j=1;j<=i;j++)
        printf("%4c",i+64);
        printf("\n");
    }
}
