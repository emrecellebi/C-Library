#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* fptr;
	fpos_t pos;
	char dest[26];
	
	fptr = _fsopen("01.txt", "r", 0x40);
	if(fptr != NULL)
	{
		printf("%s\n", fgets(dest, 26, fptr));
		
		fgetpos64(fptr, &pos);
		printf("Cursor Position: %d\n", pos);
	}
	_fcloseall();

	return 0;
}