#include<stdio.h>
int main()
{
    int numbers[11]={1,2,3,4,5,6,7,8,9,10,11};
    int i,sum=0;

    for(i=0;i<11;i=i+1)
    {
        sum=sum+numbers[i];// u can also write as- sum+= numbers[i];
    }
    printf("Summation is : %d",sum);

    return 0;
}
