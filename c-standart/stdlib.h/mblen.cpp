#include <stdio.h>
#include <stdlib.h>

int length(const char* src);

int main(int argc, char** argv)
{
	const char* str = "Hello World!";
	printf("%d", length(str));
	
	return 0;
}

int length(const char* src)
{
	int length, tmp = 0;
	while(*src)
	{
		length = mblen(src, sizeof(char));
		if(length < 1) break;
		src += length;
		tmp += length;
	}
	
	return tmp;
}