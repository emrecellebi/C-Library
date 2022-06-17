#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	printf("Checking if processor is available...");
	if(system(NULL)) puts("Ok"); else exit(EXIT_FAILURE);
	printf("Executing command DIR...\n");
	printf("The value returned was: %d.\n", system("dir"));
	
	return 0;
}