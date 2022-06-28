#include <stdio.h>
#include <tchar.h>

int main(int argc, char** argv)
{
	char buffer1[] = "_ftcsicmp";
	char buffer2[] = "_ftcsicmp";
	
	printf("%d", _ftcsicmp(buffer1, buffer2));
	
	return 0;
}