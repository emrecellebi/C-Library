#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char src[] = "strncpy";
	
	char dest[50];
	strncpy(dest, src, sizeof(src));
	printf("%s", dest);
	
	return 0;
}