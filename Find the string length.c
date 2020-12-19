#include <stdio.h>
int main()
{
    char name[1000];
    int i=0,length;

    printf("Enter any String : ");
    scanf("%s",name);
    while(name[i]!='\0')
        {
            i=i+1;
            length=i;
        }
    printf("'%s' has : %d characters.",name,length);

    return 0;
}
