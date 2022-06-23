#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	
	if((fptr = fopen("fsociey00.dat", "r")) != NULL)
	{
		printf("STDIN: %d ", _fileno(stdin));
		printf("STDOUT: %d ", _fileno(stdout));
		printf("STDERR: %d ", _fileno(stderr));
		printf("FILE: %d", _fileno(fptr));
	}
	
	return 0;
}