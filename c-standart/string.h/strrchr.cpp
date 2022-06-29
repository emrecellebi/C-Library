#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char str[] = "This is a sample strrchr";
	char* pch;
	
	pch = strrchr(str, 'h');
	printf("%d", pch - str + 1);
	
	return 0;
}