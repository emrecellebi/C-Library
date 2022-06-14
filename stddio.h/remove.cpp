#include <stdio.h>

int main(int argc, char** argv)
{
	if(remove("01.txt") != 0) perror("File Error"); else printf("File Successfully Deleted");
	
	return 0;
}