#include <stdio.h>
#include <direct.h>
#include <tchar.h>

int main(int argc, char** argv)
{
	printf("%s", _tgetcwd(NULL, 0));
	
	return 0;
}