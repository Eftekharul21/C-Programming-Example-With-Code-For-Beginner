#include<stdio.h>
int main()
{
    float w,h;
    float bmi;
    int ch;

    printf("\tBody Mass Index Calculator\n\n");
    printf("\t1. BMI in Metric system.\n");
    printf("\t2. BMI in American system.\n");

    printf("\nEnter any choice : ");
    scanf("%d",&ch);

    if(ch==1)
    {
        printf("\nEnter your weight in (kg) : ");
        scanf("%f",&w);

        printf("\nEnter your height in (meter) : ");
        scanf("%f",&h);

        bmi=w/(h*h);
        printf("\nBMI index value : %f\n",bmi);

        if(bmi<=18.5)
        {
            printf("\nBMI index indicates-'Underweight'.\n");
        }
        else if(bmi>18.6 && bmi<=24.9)
        {
            printf("\nBMI index indicates-'Healthy'.\n");
        }
        else if(bmi>25 && bmi<=29.9)
        {
            printf("\nBMI index indicates-'Overweight'.\n");
        }
        else if(bmi>30)
        {
            printf("\nBMI index indicates-'Obese'.\n");

        }

    }

    else if(ch==2)
    {
        printf("\nEnter your weight in (lb) : ");
        scanf("%f",&w);

        printf("\nEnter your height in (inch) : ");
        scanf("%f",&h);

        bmi=703*(w/(h*h));
        printf("\nBMI index value : %f\n",bmi);

        if(bmi<=18.5)
        {
            printf("\nBMI index indicates-'Underweight'.\n");
        }
        else if(bmi>18.6 && bmi<=24.9)
        {
            printf("\nBMI index indicates-'Healthy'.\n");
        }
        else if(bmi>25 && bmi<=29.9)
        {
            printf("\nBMI index indicates-'Overweight'.\n");
        }
        else if(bmi>30)
        {
            printf("\nBMI index indicates-'Obese'.\n");

        }
    }
    else
        printf("\nError! Please enter right choice.\n");

    return 0;
}

