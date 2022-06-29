#include <stdio.h>
#include <direct.h>

int main(int argc, char** argv)
{
	printf("Current Get Drive: %d", _getdrive());
	
	return 0;
}