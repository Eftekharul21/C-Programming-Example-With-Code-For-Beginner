/*C program to check whether a character is VOWEL or CONSONANT using switch.*/
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))//condition to check character is alphabet or not
    {
        switch(ch)//check for VOWEL or CONSONANT
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'u':
                printf("character: %c is a Vowel.\n",ch);
                break;
                default:
                printf("character: %c is a Consonant.\n",ch);
        }
    }
    else
    {
        printf("%c is not an alphabet.\n",ch);
    }
    return 0;
}
