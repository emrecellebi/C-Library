#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char sz[] = "1856892505 17b00a12b -01100011010110000010001101100 0x6fffff";
	char* endptr;
	unsigned long long l1, l2, l3, l4;
	l1 = strtoull(sz, &endptr, 10);
	l2 = strtoull(endptr, &endptr, 16);
	l3 = strtoull(endptr, &endptr, 2);
	l4 = strtoull(endptr, &endptr, 0);
	
	printf("%llu %llu %llu %llu", l1, l2, l3, l4);
	
	return 0;
}