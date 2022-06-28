#include <stdio.h>
#include <tchar.h>

int main(int argc, char** argv)
{
	char str[] = "This is a sample _tcspbrk";
	char keys[] = "sr";
	char* pch;
	
	pch = _tcspbrk(str, keys);
	while(pch != NULL)
	{
		printf("%d --> %c\n", pch - str + 1, *pch);
		pch = _tcspbrk(pch + 1, keys);
	}
	
	return 0;
}