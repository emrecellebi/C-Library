#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	
	fptr = fopen("01.txt", "w");
	if(fptr != NULL)
	{
		fseek(fptr, 15, SEEK_SET);
		fputs("Test", fptr);
	}
	fclose(fptr);
	
	return 0;
}