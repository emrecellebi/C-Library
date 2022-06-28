#include <stdio.h>
#include <stdlib.h>
#include <direct.h>

int main(int argc, char** argv)
{
	char* dest = (char*)malloc(2000 * sizeof(char));
	
	_getcwd(dest, 2000);
	
	printf("Current Directory: %s\n", dest);
	printf("Change Current Directory: %d\n", _chdir("E:/Torrents"));
	printf("Current Directory: %s", _getcwd(NULL, 0));
	
	return 0;
}