#include <stdio.h>
#include <tchar.h>

int main(int argc, char** argv)
{
	char str[] = "This is a sample _ftcspbrk";
	char keys[] = "sr";
	char* pch;
	
	pch = _ftcspbrk(str, keys);
	while(pch != NULL)
	{
		printf("%d --> %c\n", pch - str + 1, *pch);
		pch = _ftcspbrk(pch + 1, keys);
	}
	
	return 0;
}