#include <stdio.h>
int main()
{
    int c;
    printf("Even numbers (1-100): \n");

    for(c=1;c<=100;c++)
	{
        if(c%2==0) /*Even numbers are divisible by 2*/
		{
            printf("%d ",c);  /*c is even,print it*/
        }
    }
    return 0;
}
