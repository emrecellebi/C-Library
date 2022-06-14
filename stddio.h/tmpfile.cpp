#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	
	fptr = tmpfile();
	if(fptr != NULL)
	{
		fputs("Hello World", fptr);
	}
	fclose(fptr);
	
	return 0;
}