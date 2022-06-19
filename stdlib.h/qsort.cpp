#include <stdio.h>
#include <stdlib.h>

int compareints(const void* a, const void* b);

int main(int argc, char** argv)
{
	int* ptr;
	int key = 50;
	int values[] = {50, 20, 60, 40, 10, 30};
	
	int len = sizeof(values) / sizeof(values[0]);
	
	for(int i = 0; i < len; i++)
		printf("%d ", values[i]);
	
	qsort(values, len, sizeof(int), compareints);
	
	printf("\n");
	
	for(int i = 0; i < len; i++)
		printf("%d ", values[i]);
	
	return 0;
}

int compareints(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}