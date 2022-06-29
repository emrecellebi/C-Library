#include <stdio.h>
#include <tchar.h>

int main(int argc, char** argv)
{
	char str[] = "_ftcscpy";
	char dest[50];
	
	_ftcscpy(dest, str);
	
	printf("%s", dest);
	
	return 0;
}