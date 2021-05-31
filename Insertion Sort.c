#include<stdio.h>
int main()
{
    int i,j,count,temp,num[100];

    printf("How many elements?: ");
    scanf("%d",&count);
    printf("Enter %d elements: ",count);

    for(i=0;i<count;i++)
    scanf("%d",&num[i]);
    for(i=1;i<count;i++)
    {
      temp=num[i];
      j=i-1;
      while((temp<num[j])&&(j>=0))
      {
          num[j+1]=num[j];
          j=j-1;
      }
      num[j+1]=temp;
    }
    printf("Sorted elements: ");
    for(i=0;i<count;i++)
    printf(" %d",num[i]);

    return 0;

}
