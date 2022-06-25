#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char str[] = "strcspn";
	char keys[] = "nr";
	printf("Position: %d", strcspn(str, keys) + 1);
	
	return 0;
}