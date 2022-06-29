#include <stdio.h>

int main(int argc, char** argv)
{
	char str[] = "This is a test _fputchar!!";
	char* ptr;
	
	ptr = str;
	while((*ptr != '\0') && _fputchar(*(ptr++)) != EOF);
	
	return 0;
}