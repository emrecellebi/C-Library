#include <stdio.h>
#include <stdlib.h>
#include <direct.h>

int main(int argc, char** argv)
{
	char* buffer = (char*)malloc(2000 * sizeof(char));
	
	_getdcwd(3, buffer, 2000);
	
	printf("%s -- %s", buffer, _getdcwd(0, NULL, 0));
	
	return 0;
}

/** Sürücüler **/
// 0 --> Varsayılan sürücü
// 1 --> A sürücüsü
// 2 --> B sürücüsü
// 3 --> C sürücüsü
// 4 --> D sürücüsü vb olarak devam eder.