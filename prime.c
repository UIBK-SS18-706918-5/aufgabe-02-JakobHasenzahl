#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) 
{
	
	int a;
	float r;
	int i;
	if(argc == 2)
	{
		a = atol(argv[1]);
		for(i = 2;i <= a; i++)
		{
			r = a % i;
			if(r == 0 && a != i)
			{
				printf("%i is no prime number\n", a);
				break;
			}
			if(i == a)
			{
				printf("It looks like %i is a prime number\n", a);
			}
		}
	}
	else
	{
		printf("Something went wrong, please check the input\n");
	}
	return 0;
}
