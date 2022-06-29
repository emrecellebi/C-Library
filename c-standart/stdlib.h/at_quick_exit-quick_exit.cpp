#include <stdio.h>
#include <stdlib.h>

void exit_1();
void exit_2();

int main(int argc, char** argv)
{
	at_quick_exit(exit_1);
	at_quick_exit(exit_2);
	puts("Main Function: Beginning");
	quick_exit(EXIT_SUCCESS);
	puts("Main Function: End");
	
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