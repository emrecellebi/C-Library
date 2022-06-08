#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	char dest[26];
	fpos_t pos = 27;
	
	fptr = fopen("01.txt", "a");
	if(fptr != NULL)
	{
		fsetpos(fptr, &pos);
		
		fputs("Test", fptr);
	}
	fclose(fptr);
	
	return 0;
}