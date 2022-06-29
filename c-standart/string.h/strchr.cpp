#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char str[] = "strchr";
	char* pch;
	
	pch = strchr(str, 'r');
	while(pch != NULL)
	{
		printf("Found at %d\n", pch - str + 1);
		pch = strchr(pch + 1, 'r');
	}
	
	return 0;
}