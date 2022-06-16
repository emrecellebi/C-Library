#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char sz[] = "90613.305 365.24";
	char* endptr;
	long double l1, l2;
	l1 = strtold(sz, &endptr);
	l2 = strtold(endptr, NULL);
	
	printf("%.2Lf", l1 / l2);
	
	return 0;
}