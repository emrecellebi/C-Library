#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char str[][5] = {"R2D2", "C3PO", "R2A6"};
	
	for(int n = 0; n < 3; n++)
		if(!strncmp(str[n], "R2xx", 2)) printf("Found %s\n", str[n]);
	
	return 0;
}