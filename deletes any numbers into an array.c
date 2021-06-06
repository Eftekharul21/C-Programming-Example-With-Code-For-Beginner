#include<stdio.h>
int main()
{
    int i,n,a[100],p;

    printf("How many numbers?: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter any position to Delete: ");
    scanf("%d",&p);

    if(p<0||p>n)
        printf("Delete is impossible.");
    else
    {
        for(i=p+1;i<n;i++)
            a[i-1]=a[i];
        n--;
    }
    printf("\nAfter Delete array contains: \n");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    return 0;
}
