#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	char dest[26];
	fpos_t pos;
	
	fptr = fopen("01.txt", "r");
	if(fptr != NULL)
	{
		fgetpos(fptr, &pos);
		printf("Cursor Position: %d\n", pos);
		
		printf("%s\n", fgets(dest, 26, fptr));
		if(feof(fptr) != 0)
		{
			printf("File Not Reading!");
			return 0;
		}
		printf("%s\n", dest);
		
		fgetpos(fptr, &pos);
		printf("Cursor Position: %d\n", pos);
	}
	fclose(fptr);
	
	return 0;
}