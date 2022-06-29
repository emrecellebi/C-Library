#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char* buffer;
	int i = 22;
	
	buffer = (char*)malloc(i + 1);
	if(buffer == NULL) return -1;
	
	for(int n = 0; n < i; n++)
		buffer[n] = rand() % 26 + 'a';
	buffer[i] = '\0';
	
	printf("Random String: %s", buffer);
	
	free(buffer);
	
	return 0;
}