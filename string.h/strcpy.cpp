#include <stdio.h>
#include <string.h>

struct Data
{
	char name[22];
	int age;
};

int main(int argc, char** argv)
{
	char src[] = "strcpy";
	
	char dest[50];
	strcpy(dest, src);
	printf("%s -- ", dest);
	
	Data d1;
	strcpy(d1.name, src);
	d1.age = 22;
	
	printf("Name: %s - Age: %d", d1.name, d1.age);
	
	return 0;
}