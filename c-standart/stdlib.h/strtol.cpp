#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char sz[] = "2001 60c0c0 -1101110100110100100000 0x6fffff";
	char* endptr;
	long l1, l2, l3, l4;
	l1 = strtol(sz, &endptr, 10);
	l2 = strtol(endptr, &endptr, 16);
	l3 = strtol(endptr, &endptr, 2);
	l4 = strtol(endptr, &endptr, 0);
	
	printf("%ld %ld %ld %ld", l1, l2, l3, l4);
	
	return 0;
}