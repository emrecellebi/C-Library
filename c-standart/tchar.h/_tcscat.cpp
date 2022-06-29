#include <stdio.h>
#include <tchar.h>

int main(int argc, char** argv)
{
	char str[] = "_tcscat";
	
	_tcscat(str, " Testing");
	printf("%s", str);
	
	return 0;
}