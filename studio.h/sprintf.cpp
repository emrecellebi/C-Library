#include <stdio.h>

int main(int argc, char** argv)
{
	char buffer[BUFSIZ];
	int cx;
	
	cx = sprintf(buffer, "The half of %d is %d", 60, (60 / 2));
	printf("cx: %d - Buffer: %s", cx, buffer);
	
	return 0;
}