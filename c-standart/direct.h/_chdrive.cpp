#include <stdio.h>
#include <direct.h>

int main(int argc, char** argv)
{
	printf("Current Drive: %d\n", _getdrive());
	printf("Change Drive: %d\n", _chdrive(5));
	printf("Current Drive: %d", _getdrive());
	
	return 0;
}