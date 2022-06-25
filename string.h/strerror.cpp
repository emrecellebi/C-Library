#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	
	fptr = fopen("02.txt", "r");
	if(fptr == NULL) printf("Error opening file: %s -- %s", strerror(errno), strerror(*_errno()));
	fclose(fptr);
	
	return 0;
}