#include <stdio.h>
#include <direct.h>

int main(int argc, char** argv)
{
	printf("Drives: %d", _getdrives());
	
	return 0;
}