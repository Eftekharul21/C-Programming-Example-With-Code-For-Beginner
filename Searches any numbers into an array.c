#include<stdio.h>
int main()
{
    int i,n,a[100],num,found;

    printf("How many numbers?: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter any number to searches: ");
    scanf("%d",&num);

    found=0;
    for(i=0;i<n;i++)
        if(a[i]==num)
        found=1;
    if(found==1)
        printf("Found.");
    else
        printf("Not Found.");

    return 0;
}
