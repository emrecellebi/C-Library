#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	const char* str = "Hello World!";
	wchar_t dest[32];
	size_t size;
	
	size = mbstowcs(dest, str, sizeof(dest));
	
	printf("%d %ls", size, dest);
	
	return 0;
}