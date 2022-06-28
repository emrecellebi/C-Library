#include <stdio.h>
#include <stdlib.h>
#include <direct.h>

int main(int argc, char** argv)
{
	char* buffer = (char*)malloc(2000 * sizeof(char));
	
	_getcwd(buffer, 2000);
	
	printf("%s -- %s", buffer, _getcwd(NULL, 0));
	
	return 0;
}