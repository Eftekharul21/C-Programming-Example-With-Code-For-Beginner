#include<stdio.h>
int main()
{
    int n,count=1;

    printf("Enter the total number value: ");
    scanf("%d",&n);
    start:
        if(count>n)
            goto end;
        printf("%4d",count);
        count++;
        goto start;
        end:

    return 0;
}
