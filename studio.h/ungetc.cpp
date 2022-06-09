#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	int ch;
	char buffer[256];
	
	fptr = fopen("01.txt", "rt");
	if(fptr != NULL)
	{
		while(!feof(fptr))
		{
			ch = getc(fptr);
			if(ch == EOF) break;
			(ch == '#') ? ungetc('@', fptr) : ungetc(ch, fptr);
			if(fgets(buffer, 255, fptr) != NULL) fputs(buffer, stdout); else break;
		}
	}
	fclose(fptr);
	
	return 0;
}