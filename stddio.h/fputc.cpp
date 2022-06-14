#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	
	fptr = fopen("01.txt", "w");
	if(fptr != NULL)
	{
		for(char i = 'A'; i <= 'Z'; i++)
			printf("%c", fputc(i, fptr));
	}
	fclose(fptr);
	
	return 0;
}