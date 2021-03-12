#include<stdio.h>
int main()
{
    int a;

    FILE *fp;

    fp=fopen("C:\\Users\\tc\\Desktop\\File in C\\Filewrite.txt","r");

    while(fscanf(fp,"%d",&a)!=EOF)
        printf("%4d",a);

    return 0;
}
