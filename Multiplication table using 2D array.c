#include<stdio.h>
#define Row 20
#define Col 20
int main()
{
    int r,c;
    int mul[Row] [Col];

    printf("\t\t====================\n");
    printf("\t\tMULTIPLICATION TABLE\n");
    printf("\t\t====================\n\n");
    printf("     ");
    for(int j=1;j<=Col;j++)
    {

        printf("%4d",j);
    }
    printf("\n============================");
    printf("=================\n");

    for(int i=0;i<Row;i++)
    {
        r=i+1;
        printf("%2d | ", r);

        for(int j=1;j<=Col;j++)
        {
            c=j;
            mul[i][j]=r*c;
            printf("%4d",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
