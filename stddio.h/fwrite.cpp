#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	char buffer[4] = {'A', 'B', 'C', 'D'};
	
	fptr = fopen("01.txt", "w+");
	if(fptr != NULL)
	{
		printf("%d", fwrite(buffer, sizeof(char), sizeof(buffer), fptr));
	}
	fclose(fptr);

	return 0;
}