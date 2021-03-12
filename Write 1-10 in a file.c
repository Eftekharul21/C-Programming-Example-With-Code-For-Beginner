#include<stdio.h>
int main()
{
    int i;

    FILE *fp;

    fp=fopen("C:\\Users\\tc\\Desktop\\File in C\\Filewrite.txt","w");

    for(i=1;i<=10;i++)
    {
        fprintf(fp,"%4d",i);
    }
    printf("Data write successful.");
    return 0;
}
