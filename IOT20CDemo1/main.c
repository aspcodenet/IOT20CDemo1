#include <stdio.h>

#include "safeinput.h"


int main()
{
	printf("Starting");

	char namn[100];
	GetInput("Mata in namn", namn, sizeof(namn));

	int age;
	GetInputInt("Mata in age", &age);
	if(age>1234)
	{
		
	}

	return 0;
}
