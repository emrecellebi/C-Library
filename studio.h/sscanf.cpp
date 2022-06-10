#include <stdio.h>

int main(int argc, char** argv)
{
	char buffer[BUFSIZ];
	int cx, num;
	float pi;
	
	cx = sscanf("Hello_World! 21 3.14", "%s %d %f", buffer, &num, &pi);
	printf("cx: %d - Buffer: %s - Num: %d - PI: %f", cx, buffer, num, pi);
	
	return 0;
}