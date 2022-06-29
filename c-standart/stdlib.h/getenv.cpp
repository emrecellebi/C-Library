#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char* env;
	
	env = getenv("os");
	if(env != NULL)
		printf("Enviroment Variable: %s", env);
	
	return 0;
}