#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char src[] = "strxfrm";
	char dest[22];
	
	size_t len = strxfrm(dest, src, sizeof(src));
	
	printf("Dest: %s Length: %d - Length: %d", dest, len, strxfrm(NULL, src, 0));
	
	return 0;
}