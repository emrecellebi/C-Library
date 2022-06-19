#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	div_t res;
	res = div(5, 2);
	printf("Bolunen: %d - Kalan: %d - Mod: %d", res.quot, res.rem, 5 % 2);
	
	return 0;
}