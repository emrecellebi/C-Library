#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char src[] = "strcat";
	char dest[50] = "--> ";
	
	strcat(dest, src);
	
	printf("%s", dest);
	
	return 0;
}