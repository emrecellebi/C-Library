#include <stdio.h>
#include <direct.h>

int main(int argc, char** argv)
{
	printf("Created Directory: %d", _mkdir("mkdir"));
	
	return 0;
}