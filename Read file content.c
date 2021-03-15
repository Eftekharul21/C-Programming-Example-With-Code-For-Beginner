#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char filename[100],c;

	printf("Enter the filename : "); //you have enter file name with extension like "Test.txt"
	scanf("%s",filename);

	fptr=fopen(filename,"r");
	if (fptr==NULL)
	{
		printf("Error!Cannot read the file.\n");
		exit(0);
	}
	printf("The content of file : \n");
	c=fgetc(fptr);
	while(c!=EOF)
	{
		printf ("%c",c);
		c=fgetc(fptr);
	}
	fclose(fptr);
	return 0;
}
