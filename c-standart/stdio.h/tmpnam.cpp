#include <stdio.h>

int main(int argc, char** argv)
{
	char buffer[L_tmpnam];
	char* ptr;
	
	tmpnam(buffer);
	printf("Temporary Name 1: %s\n", buffer);
	
	printf("Temporary Name 2: %s", tmpnam(NULL));
	
	return 0;
}