// Simple Calculator Program in C using Function
#include<stdio.h>

float addFun(float,float);
float subFun(float,float);
float mulFun(float,float);
float divFun(float,float);

int main()
{
    float num1,num2,res;
    int choice;
    do
    {
        printf("\n|Simple Calculator Program|\n");
        printf("\n 1. Addition\n");
        printf(" 2. Subtraction\n");
        printf(" 3. Multiplication\n");
        printf(" 4. Division\n");
        printf(" 5. Exit\n\n");
        printf("Enter Your Choice(1-5): ");
        scanf("%d",&choice);

        if(choice>=1&&choice<=4)
        {
            printf("\nEnter any two Numbers: ");
            scanf("%f %f",&num1,&num2);
        }
        printf("|------------------|");
        switch(choice)
        {
            case 1:
                res=addFun(num1,num2);
                printf("\n  Result = %0.2f",res);
                break;
            case 2:
                res=subFun(num1,num2);
                printf("\n  Result = %0.2f",res);
                break;
            case 3:
                res=mulFun(num1,num2);
                printf("\n  Result = %0.2f",res);
                break;
            case 4:
                res=divFun(num1,num2);
                printf("\n  Result = %0.2f",res);
                break;
            case 5:
                return 0;
            default:
                printf("\n   Wrong Choice!");
                break;
        }
        printf("\n|------------------|\n");
    }while(choice!=5);

    return 0;
}
float addFun(float a,float b)
{
    return(a+b);
}
float subFun(float a,float b)
{
    return(a-b);
}
float mulFun(float a,float b)
{
    return(a*b);
}
float divFun(float a,float b)
{
    return(a/b);
}
