#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	float* ptr;
	float* new_ptr;
	
	ptr = (float*)malloc(5 * sizeof(float));
	if(ptr == NULL) return -1;
	
	for(int i = 0; i < 5; i++)
		ptr[i] = i * 1.5;
	
	/// realloc yeniden boyutlandır.
	new_ptr = (float*)realloc(ptr, 10 * sizeof(float));
	if(new_ptr == NULL) return -1;
	
	for(int i = 0; i < 10; i++)
		new_ptr[i] = i * 2.5;
	
	
	
	for(int i = 0; i < 5; i++)
		printf("%f ", ptr[i]);
	
	printf("\n");
	
	for(int i = 0; i < 10; i++)
		printf("%f ", new_ptr[i]);
	
	return 0;
}