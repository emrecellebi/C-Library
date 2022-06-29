#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	ldiv_t res;
	res = ldiv(5L, 2L);
	printf("Bolunen: %ld - Kalan: %ld - Mod: %d", res.quot, res.rem, 5 % 2);
	
	return 0;
}