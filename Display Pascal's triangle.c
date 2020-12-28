#include<stdio.h>
int main()
{
    int i,j,k,row,c=1;
    printf("Enter the number of rows: ");
    scanf("%d",&row);

    for(i=0;i<row;i++)
    {
        for(k=1;k<=row-i;k++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if(j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
        printf("\n");
    }
}
