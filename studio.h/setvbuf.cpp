#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	char buffer[BUFSIZ];
	
	fptr = fopen("01.txt", "w");
	if(fptr != NULL)
	{
		setvbuf(fptr, buffer, _IOFBF, 1024);
		fputs("This is send to buffered stream", fptr);
		fflush(fptr);
	}
	fclose(fptr);
	
	return 0;
}

// _IOFBF			/// 0x0000 -- Tam olarak ara belleğe al
// _IOLBF			/// 0x0040 -- Satır olarak ara belleğe al
// _IONBF			/// 0x0004 -- Ara belleğe alma