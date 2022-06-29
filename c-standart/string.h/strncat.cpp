#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char src[] = "strncat";
	char dest[50] = "--> ";
	
	strncat(dest, src, 2);
	
	printf("%s", dest);
	
	return 0;
}