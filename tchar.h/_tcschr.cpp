#include <stdio.h>
#include <tchar.h>

int main(int argc, char** argv)
{
	printf("%s", _tcschr("_tcschr", 's'));
	
	return 0;
}