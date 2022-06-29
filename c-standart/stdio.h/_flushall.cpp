#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	
	if((fptr = fopen("fsociey00.dat", "w+")) != NULL)
	{
		fprintf(fptr, "Hello World!");
		printf("%d", _flushall());
	}
	
	return 0;
}