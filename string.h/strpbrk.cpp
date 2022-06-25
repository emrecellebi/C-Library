#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char str[] = "This is a sample strpbrk";
	char keys[] = "sr";
	char* pch;
	
	pch = strpbrk(str, keys);
	while(pch != NULL)
	{
		printf("%d --> %c\n", pch - str + 1, *pch);
		pch = strpbrk(pch + 1, keys);
	}
	
	return 0;
}