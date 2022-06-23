#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	
	fptr = fopen("01.txt", "r");
	if(fptr != NULL)
	{
		printf("First data word in file: %x", _getw(fptr));
	}
	
	fclose(fptr);
	
	return 0;
}