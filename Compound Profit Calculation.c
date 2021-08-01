#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );

    int ch;
    float p,r,n,a,i;
    float c,cp,si;

    while(1)
    {
        printf("\n~~~~Profit Calculation~~~~\n\n");
        printf(" 1. Compound Profit Calculation. \n");
        printf(" 2. Simple Profit Calculation.\n");
        printf(" 3. Exit\n\n");

        printf("Enter your choice :  ");
        scanf("%d",&ch);

        if(ch>0&&ch<4)
        {
            switch(ch)
            {
                case 1:
                    printf("\nEnter Principal Amount: ");
                    scanf("%f",&p);
                    printf("Enter Rate of Interest: ");
                    scanf("%f",&r);
                    printf("Enter Time-line: ");
                    scanf("%f",&n);

                    c= p*(pow((1+r/100),n));
                    cp=c-p;
                    printf("\nCompound Profit: %.2f\n",cp);
                    printf("Compound Principal Amount: %.2f\n",c);

                    break;

                case 2:
                    printf("\nEnter Principal Amount: ");
                    scanf("%f",&p);
                    printf("Enter Rate of Interest: ");
                    scanf("%f",&r);
                    printf("Enter Time-line: ");
                    scanf("%f",&n);

                    si=(p*r*n)/100;
                    printf("\nSimple Profit: %.2f\n",si);
                    a=si+p;
                    printf("Total Principal Amount: %.2f\n\n",a);
                    break;

                case 3:
                    printf("\n\tHave a nice Day!\n\n");
                    exit(0);
                }
        }
        else
            printf("Invalid Choice!\n\n");
    }
    return 0;
}
