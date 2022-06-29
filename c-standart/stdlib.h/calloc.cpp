#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int* ptr;
	
	ptr = (int*)calloc(22, sizeof(int));
	
	for(int i = 0; i < 22; i++)
	{
		printf("%d ", ptr[i]);
	}
	
	return 0;
}