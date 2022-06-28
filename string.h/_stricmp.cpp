#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char buffer1[] = "_stricmp";
	char buffer2[] = "_stricmp";
	
	printf("%d", _stricmp(buffer1, buffer2));
	
	return 0;
}