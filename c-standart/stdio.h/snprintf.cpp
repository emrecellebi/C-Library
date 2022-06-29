#include <stdio.h>

int main(int argc, char** argv)
{
	char buffer[BUFSIZ];
	int cx, cx2;
	
	cx = snprintf(buffer, BUFSIZ, "The half of %d is %d", 60, (60 / 2));
	cx2 = snprintf((buffer + cx), (BUFSIZ - cx), ", and the half of that is %d.", (60 / 2 / 2));
	printf("cx: %d - cx2: %d - Buffer: %s", cx, cx2, buffer);
	
	return 0;
}