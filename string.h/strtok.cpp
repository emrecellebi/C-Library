#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char str[] = "This is a sample strtok";
	char delimeter[] = " ,";
	char* pch;
	
	pch = strtok(str, delimeter);
	while(pch != NULL)
	{
		printf("%s -- ", pch);
		pch = strtok(NULL, delimeter);
	}
	
	return 0;
}