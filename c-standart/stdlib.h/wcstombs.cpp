#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	const wchar_t* str = L"Hello World!";
	char dest[32];
	size_t size;
	
	size = wcstombs(dest, str, sizeof(dest));
	
	printf("%d %s", size, dest);
	
	return 0;
}