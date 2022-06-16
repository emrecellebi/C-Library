#include <stdio.h>

int main(int argc, char** argv)
{
	char str[1024];
	
	printf("%s - ", gets(str));
	printf("%s", str);
	
	return 0;
}