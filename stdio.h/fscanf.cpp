#include <stdio.h>

int main(int argc, char** argv)
{
	FILE *fptr;
	char str[5];
	float pi;
	size_t x;
	
	fptr = fopen("01.txt", "w+");
	if(fptr != NULL)
	{
		fprintf(fptr, "%f %s", 3.1416, "PI");
		rewind(fptr);
		x = fscanf(fptr, "%f %s", &pi, str);
		printf("%f %s %d", pi, str, x);
	}
	fclose(fptr);
	
	return 0;
}