#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	lldiv_t res;
	res = lldiv(5L, 2L);
	printf("Bolunen: %lld - Kalan: %lld - Mod: %d", res.quot, res.rem, 5 % 2);
	
	return 0;
}