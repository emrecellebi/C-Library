#include <stdio.h>
#include <string.h>

struct Data
{
	char name[22];
	int age;
};

int main(int argc, char** argv)
{
	char src[] = "Melek";
	
	char dest[50];
	memcpy(&dest, &src, sizeof(src));
	printf("%s -- ", dest);
	
	Data d1, d2;
	memcpy(&d1.name, &src, sizeof(src));
	d1.age = 22;
	
	memcpy(&d2, &d1, sizeof(d1));
	printf("Name: %s - Age: %d", d2.name, d2.age);
	
	return 0;
}