#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter the Range: ");
	scanf("%d",&n);
	printf("Even numbers between 1 to N: \n");
	for (i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                printf("%d\n",i);
            }
        }
	return 0;
}
