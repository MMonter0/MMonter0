#include<stdio.h>
#include<math.h>

double calcularCuadrado(double); //prototipo de la funcion

int main (void)
{
	double x;
	double resultado;

	printf ("Dame un numero entero para calcular su cuadrado: \n");
	scanf("%lf", &x);

	resultado = calcularCuadrado(x);
	printf ("El cuadrado de x es: %.2lf\n", resultado);
	printf ("El valor de x es: %.2lf\n", x);
	return 0;
}

double calcularCuadrado (double x) {
	double resultado;
	resultado = x*x;
	return resultado; 
}