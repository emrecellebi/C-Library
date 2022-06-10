#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	int ch;
	char buffer[256];
	
	fptr = fopen("01.txt", "r");
	if(fptr != NULL) 
	{
		while(!feof(fptr))
		{
			ch = fgetc(fptr);
			(ch == '!') ? printf("%c - ", ungetc('+', fptr)) : printf("%c - ", ungetc(ch, fptr));
			fgets(buffer, 255, fptr);
			fputs(buffer, stdout); 				/// stdout ile console üzerine çıktıyı verir.
		}
	}
	fclose(fptr);
	
	return 0;
}

/***

Dosya İçeriği

this is tutorial
!c standard library
!library functions and macros

***/