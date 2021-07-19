#include<stdio.h>
int main()
{
	int i,j,n;
	printf("How many lines: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%4d",j);
		printf("\n");
	}
}
