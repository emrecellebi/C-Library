#include <stdio.h>

int main(int argc, char** argv)
{
	if(rename("01.txt", "02.txt") != 0) perror("File Error"); else printf("File Successfully Renamed");
	
	return 0;
}