#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char str[] = "This is a sample strspn";
	char keys[] = "This is a";
	
	printf("%d", strspn(str, keys));
	
	return 0;
}