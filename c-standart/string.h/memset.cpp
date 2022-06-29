#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char str[] = "This is a sample memset";
	memset(str, '-', 4);
	printf("%s", str);
	
	return 0;
}