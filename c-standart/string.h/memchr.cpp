#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char* pch;
	char str[] = "memchr";
	
	pch = (char*)memchr(str, 'c', sizeof(str));
	(pch != NULL) ? printf("Found at position: %d", pch - str + 1) : printf("Not Found");
	
	return 0;
}