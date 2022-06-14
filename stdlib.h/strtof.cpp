#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char sz[] = "365.2 29.5";
	char* endptr;
	double f1, f2;
	f1 = strtof(sz, &endptr);
	f2 = strtof(endptr, NULL);
	
	printf("%f %f", f1, f2);
	
	return 0;
}