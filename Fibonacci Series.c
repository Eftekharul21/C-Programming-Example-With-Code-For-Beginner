#include<stdio.h>
#define Max 10
int main()
{
	int fibo[Max],i;
	fibo[0]=1;
	fibo[1]=1;
	printf("First 10 consecutive fibonacci numbers are : \n");

	for(i=2;i<=Max;i++)
	{
		fibo[i]=fibo[i-2]+fibo[i-1];
	}
	for(i=0;i<Max;i++)
	{
		printf("%5d",fibo[i]);
	}
	return 0;
}
