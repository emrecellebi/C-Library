#include <stdio.h>
#include <tchar.h>

int main(int argc, char** argv)
{
	char str[] = "_ftcscat";
	
	_ftcscat(str, " Testing");
	printf("%s", str);
	
	return 0;
}