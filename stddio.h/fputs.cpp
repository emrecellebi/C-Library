#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	
	fptr = fopen("01.txt", "w");
	if(fptr != NULL)
	{
		fputs("Hello World!", fptr);
	}
	fclose(fptr);
	
	return 0;
}