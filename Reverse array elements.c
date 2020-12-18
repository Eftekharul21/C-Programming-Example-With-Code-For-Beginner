#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5};
    int n=5;
    int temp;

    for(int i=0;i<n/2;i+=1)
    {
        temp=array[i];//exchange value of array[i] and array[n-1-i]
        array[i]=array[n-1-i];
        array[n-1-i]=temp;//store the reverse elements in temp. memory
    }

    printf("Reverse order is : \n");

    for(int i=0;i<n;i+=1)
    {
        printf("%d\n",array[i]);// Showing the value of array[i] in Reverse Order
    }
    return 0;
}
