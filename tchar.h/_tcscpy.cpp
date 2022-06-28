#include <stdio.h>
#include <tchar.h>

int main(int argc, char** argv)
{
	char str[] = "_tcscpy";
	char dest[50];
	
	_tcscpy(dest, str);
	
	printf("%s", dest);
	
	return 0;
}