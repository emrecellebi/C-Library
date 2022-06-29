#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int length;
	wchar_t dest;
	const char* src = "Hello World!";
	size_t max = sizeof(src);
	
	while(max > 0)
	{
		length = mbtowc(&dest, src, max);
		if(length < 1) break;
		printf("%d --> %lc\n", length, dest);
		src += length;
		max -= length;
	}
	
	return 0;
}