#include<stdio.h>
int main()
{
    int i,p,n,num[10];
    printf("Enter Ten numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    p=0;
    n=0;
    for(i=0;i<10;i++)
    {
        if(num[i]>=0)
        {
            p=p+1;
        }
        else
        n=n+1;
    }
    printf("Total Positive Numbers: %d\n",p);
    printf("Total Negative Numbers: %d",n);

}
