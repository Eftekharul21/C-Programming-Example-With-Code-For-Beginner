#include<stdio.h>
int main()
{
    int i,s,e;

    printf("Enter lower limit: ");
    scanf("%d",&s);
    printf("Enter upper limit: ");
    scanf("%d",&e);

    printf("Even numbers (%d-%d): \n",s,e);
    if(s%2!=0)
    {
        s++;
    }
    for(i=s;i<=e;i=i+2)
    {
        printf("%d ",i);
    }
}
