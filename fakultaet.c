#include <stdio.h>
#include <stdlib.h>

// The calculation of the factorial is correct up to 12! = 479001600
// int is limited to 2,147,483,647 so 13! cant be displayed anymore


int main(int argc, char ** argv) 
{
	int i = 0;
	int a;
	int s = 1;	

	if(argc != 2)
	{
		printf("Something went wrong, please check your Input\n");
	}
	else
	{
		a = atoi(argv[1]);
		int b = a;
		for(i; i < a; i++)
		{
			s = b * s;
			b--;
		}
		if(s == 0)
		{
			s = 1;
		}
		printf("Number of bytes used to store the result: %i\n", sizeof(a));
		printf("The factorial of %i is %i\n", a, s);
	}
	return 0;
}
