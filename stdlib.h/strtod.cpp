#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char sz[] = "365.24 29.53";
	char* endptr;
	double d1, d2;
	d1 = strtod(sz, &endptr);
	d2 = strtod(endptr, NULL);
	
	printf("%f %f", d1, d2);
	
	return 0;
}