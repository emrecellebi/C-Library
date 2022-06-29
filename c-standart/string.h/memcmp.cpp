#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char buffer1[] = "memcmp";
	char buffer2[] = "memcmp";
	
	printf("%d", memcmp(buffer1, buffer2, sizeof(buffer2)));
	
	return 0;
}