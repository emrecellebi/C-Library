#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	
	fptr = fopen("01.txt", "w");
	if(fptr != NULL)
	{
		fputs("Test", fptr);
		printf("%d", ftell(fptr));
	}
	fclose(fptr);
	
	return 0;
}