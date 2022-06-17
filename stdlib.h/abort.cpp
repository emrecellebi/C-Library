#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	
	fptr = fopen("01.txt", "r");
	if(fptr == NULL)
	{
		perror("Error");
		abort();
	}
	
	return 0;
}