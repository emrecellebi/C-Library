#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char str[] = "This is a simple strstr";
	char* pch;
	
	pch = strstr(str, "simple");
	if(pch != NULL) strncpy(pch, "sample", 6);
	printf("%s", str);
	
	return 0;
}