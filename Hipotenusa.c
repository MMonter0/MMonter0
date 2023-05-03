#include<stdio.h>
#include<math.h>

int main () {

	float a, b, hip;
	printf ("Ingresa los valores que corresponden a los lados a y b del triangulo:\n");
	scanf ("%f %f", &a, &b);

	hip=sqrt(pow(a,2)+pow(b,2));

	printf ("Dado los valores a=%0.2f y b=%0.2f, la hipotenusa mide: %0.2f\n", a, b, hip);

	return 0;
}