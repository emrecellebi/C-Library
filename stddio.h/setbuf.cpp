#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	char buffer[BUFSIZ];
	
	fptr = fopen("01.txt", "w");
	if(fptr != NULL)
	{
		setbuf(fptr, buffer);
		fputs("This is send to buffered stream", fptr);
		fflush(fptr);
	}
	fclose(fptr);
	
	return 0;
}