#include <stdio.h>
int main()
{
    int c;
    printf("Even numbers (1-100): \n");

    c=2;
    while(c<=100)
	{
	    printf("%d ",c);
        c=c+2;  /*Add 2 to current even number to get next even number*/
    }
    return 0;
}
