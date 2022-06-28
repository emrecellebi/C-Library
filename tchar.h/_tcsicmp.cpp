#include <stdio.h>
#include <tchar.h>

int main(int argc, char** argv)
{
	char buffer1[] = "_tcsicmp";
	char buffer2[] = "_tcsicmp";
	
	printf("%d", _tcsicmp(buffer1, buffer2));
	
	return 0;
}