#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	int c = 0;
	
	fptr = fopen("01.txt", "r");
	if(fptr != NULL)
	{
		while(c != EOF)
		{
			c = fgetc(fptr);
			if(c != EOF)
				printf("%d --> %c\n", c, c);
		}
	}
	fclose(fptr);
	
	return 0;
}