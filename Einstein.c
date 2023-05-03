#include<stdio.h>
#include<math.h>

#define c 2.997925e11

int main () {
	
	float masa, energia; 

	printf ("Ingresa la masa (en gramos) que se desea convertir:\n");
	scanf ("%f", &masa);
	energia=masa*pow(c,2);

	printf ("La masa (%0.2f gramos) convertida en energia equivale a: %e ergios.\n", masa, energia);
}