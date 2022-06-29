#include <stdio.h>
#include <stdlib.h>

void exit_1();
void exit_2();

int main(int argc, char** argv)
{
	atexit(exit_1);
	atexit(exit_2);
	puts("Main Function");
	
	exit(EXIT_SUCCESS);
	
	return 0;
}

void exit_1()
{
	puts("Exit Function 1");
}

void exit_2()
{
	puts("Exit Function 2");
}