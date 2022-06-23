#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char buffer1[] = "strcmp";
	char buffer2[] = "strcmp";
	
	printf("%d", strcmp(buffer1, buffer2));
	
	return 0;
}