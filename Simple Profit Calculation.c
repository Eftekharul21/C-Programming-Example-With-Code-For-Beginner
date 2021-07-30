#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
    time_t t;
    time(&t);
    printf("This Program has been written at: %s",ctime(&t));

    printf("\n~~~~Simple Profit Calculation~~~~\n\n");

    int ch;
    float p,r,n,a,i;
    float si;

    while(1)
    {
        printf("\t 1. Simple Profit \n");
        printf("\t 2. Profit Rate\n");
        printf("\t 3. Time-Line \n");
        printf("\t 4. Exit\n\n");

        printf("Enter your choice :  ");
        scanf("%d",&ch);

        if(ch>0&&ch<5)
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

                    si=(p*r*n)/100;
                    printf("\nSimple Profit: %.2f\n",si);
                    a=si+p;
                    printf("Total Principal Amount: %.2f\n\n",a);

                    break;

                case 2:
                    printf("\nEnter Profit: ");
                    scanf("%f",&i);
                    printf("Enter Principal Amount: ");
                    scanf("%f",&p);
                    printf("Enter Time-line: ");
                    scanf("%f",&n);

                    r=(i/(p*n))*100;
                    printf("Profit Rate: %.f\n\n",r);

                    break;

                case 3:
                    printf("\nEnter Profit: ");
                    scanf("%f",&i);
                    printf("Enter Principal Amount: ");
                    scanf("%f",&p);
                    printf("Enter Profit rate: ");
                    scanf("%f",&r);

                    n=i/(p*(r/100));
                    printf("Time-line: %.f\n\n",n);

                    break;

                case 4:
                    printf("\n\tHave a nice Day!\n\n");
                    exit(0);
                }
        }
        else
            printf("Invalid Choice!\n\n");
    }
    return 0;
}
