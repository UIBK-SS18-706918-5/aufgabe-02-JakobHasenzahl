#include <stdio.h>
#include <stdlib.h>

// The calculation of the factorial is correct up to 20! = 2.4*10^18
// long has 8 bytes length so it can store considerably more than int


int main(int argc, char ** argv) 
{
	long i = 0;
	long a;
	long s = 1;
	long b;	

	if(argc != 2)
	{
		printf("Something went wrong, please check your Input\n");
	}
	else
	{
		a = atol(argv[1]);
		b = a;
		for(i; i < a; i++)
		{
			s = b * s;
			b--;
		}
		if(s == 0)
		{
			s = 1;
		}
		printf("Number of bytes used to store the result: %i\n", sizeof(b));
		printf("The factorial of %ld is %ld\n", a, s);
	}
	return 0;
}
