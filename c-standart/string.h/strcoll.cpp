#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char buffer1[] = "strcoll";
	char buffer2[] = "strcoll";
	
	printf("%d", strcoll(buffer1, buffer2));
	
	return 0;
}