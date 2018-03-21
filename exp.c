#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i,v;
float x;
float e = 0;
long s;

int main(int argc, char ** argv) 
{
	if(argc == 2)
	{
		x = atof(argv[1]);
		//no bigger value possible for n! bc of the size of float
		for(i=0;i<=20;i++)
		{
			s = 1;
			for(v=1; v <= i; v++)
			{
				s = v * s;
			}
			//printf("%ld\n",s);
			if(s == 0)
			{
				s = 1;
			}

			e = e + (pow(x,i)/s);
		}
		printf("Reihenwert: %f\n",e);
	}
	return 0;
}


