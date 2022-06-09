#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	char str;
	
	fptr = fopen("01.txt", "wt");
	if(fptr != NULL)
	{
		for(str = 'A'; str <= 'Z'; str++)
			putc(str, fptr);
	}
	fclose(fptr);
	
	return 0;
}