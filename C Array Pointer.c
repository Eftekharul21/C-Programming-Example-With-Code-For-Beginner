#include<stdio.h>
const int Max=4;
int main()
{
    char *names[]=
    {
        "C-Programming",
        "C++ Programming",
        "Python Programming",
        "Java Programming"
    };
    int i=0;
    for(i=0;i<Max;i++)
    {
        printf("Value of names[%d] = %s\n",i,names[i]);
    }
    return 0;
}
