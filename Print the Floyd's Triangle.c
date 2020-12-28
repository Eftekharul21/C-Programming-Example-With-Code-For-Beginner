#include<stdio.h>
int main()
{
   int i,j,row,num=1;
   printf("Enter the number of rows: ");
   scanf("%d",&row);

   for(i=1;i<=row;i++)
   {
       for(j=1;j<=i;++j)
       {
           printf("%d ",num);
           ++num;
       }
       printf("\n");
   }
   return 0;
}
