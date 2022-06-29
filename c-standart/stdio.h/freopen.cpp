#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	
	fptr = freopen("01.txt", "w+", stdout);
	if(fptr != NULL)
	{
		printf("Test");
	}
	fclose(stdout);
	
	
	return 0;
}