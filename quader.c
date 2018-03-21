#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	float a;
	float b;
	float c;

	//printf("%i \n",argc);

	if(argc != 4)
	{	
		printf("Something went wrong with your input, please check again!\n");
	}
	else
	{
		a = atof(argv[1]);
		b = atof(argv[2]);
		c = atof(argv[3]);
		// Berechnung der Oberfläche
		float oberflaeche = 0;
		oberflaeche += 2.*a*b;
		oberflaeche += 2.*a*c;
		oberflaeche += 2.*b*c;

		// Ausgabe
		printf("Ein Quader mit den Seitenlängen %f, %f und %f hat die Oberfläche %f\n",a, b, c, oberflaeche);
	}

	return 0;
}
