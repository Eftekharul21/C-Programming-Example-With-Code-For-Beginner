#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
struct student s;
int main()
{
    printf("\tEnter information:\n");
    printf("\nEnter name: ");
    fgets(s.name,sizeof(s.name),stdin);
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%f",&s.marks);

    printf("\n\tDisplaying Information:\n");
    printf("\nName: ");
    printf("%s",s.name);
    printf("Roll number: %d\n",s.roll);
    printf("Marks: %.1f\n",s.marks);
    return 0;
}
