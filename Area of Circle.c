#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
    float rad,area;

    printf("Enter the radius of circle : ");
    scanf("%f",&rad);

    area=PI*pow(rad,2);
    //area=PI*(rad*rad);
    printf("The area of circle : %.2f",area);

    return 0;
}
