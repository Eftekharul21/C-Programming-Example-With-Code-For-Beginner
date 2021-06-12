#include<stdio.h>
void table(int num)
{
	int count;
	for(count=1;count<=10;count++)
	{
		printf("\t%d * %d = %d\n",num,count,num*count);
	}
}
int main()
{
	int num;
	printf("Enter any Number: ");
	scanf("%d",&num);
	printf("Multiplication table of %d is : \n",num);
	table(num);
}
