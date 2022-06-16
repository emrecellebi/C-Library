#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	char buffer[27];
	size_t x;
	
	fptr = fopen("01.txt", "w+");
	if(fptr != NULL)
	{
		for(int i = 'A'; i <= 'Z'; i++)
			fputc(i, fptr);
		rewind(fptr);
		x = fread(buffer, 1, 27, fptr);
		printf("%s %d", buffer, x);
	}
	fclose(fptr);
	
	return 0;
}