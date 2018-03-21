#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	float x;
	x = atof(argv[1]);
	if (x > 0)
	{
		printf("The given value is bigger than 0\n");
	}
	else if (x==0)
	{
		printf("The given value is exactly equal to 0\n");
	}
	else
	{
		printf("The given value is below 0\n");
	}
}



