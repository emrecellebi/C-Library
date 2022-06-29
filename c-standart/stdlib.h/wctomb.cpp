#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	const wchar_t* str = L"Hello World!";
	char buffer[MB_CUR_MAX];
	int length;
	
	while(*str)
	{
		length = wctomb(buffer, *str);
		if(length < 1) break;
		printf("%s", buffer);
		++str;
	}
	
	return 0;
}