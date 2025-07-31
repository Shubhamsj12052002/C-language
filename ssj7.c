#include<stdio.h>

int main()
{
	FILE *fptr;
	char ch;

	// To create a new file nad write data into it
	fptr=fopen("file1.txt","w");

	if (fptr== NULL)
	{
		printf("ERROR IN CREATING OR OPENING THE FILE\n");
		return 0;
	}
	fputs("hi guys\n",fptr);
	fprintf(fptr,"Im Shubham\n");

	fclose(fptr);
	printf("Content is written in the file\n");

	//To read the content written in the file

	fptr=fopen("file1.txt","r");
	if(fptr== NULL)
	{
		printf("ERROR IN OPENING THE FILE\n");
		return 1;
	}

	while((ch = fgetc(fptr)) != EOF)
	{
		printf("%c",ch);

	}
	fclose(fptr);

	return 0;
	




}