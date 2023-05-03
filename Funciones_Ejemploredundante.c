//Ejemplo redundante
#include<stdio.h>
#include<math.h>

double elevarPotencia(double); //prototipo de la funcion

int main (void)
{
	double x, pot;
	double resultado;

	printf ("Dame un numero entero para calcular su potencia: \n");
	scanf("%lf", &x);
	printf ("A que potencia?: \n");
	scanf("%lf", &x);

	resultado = calcularCuadrado(x, pot);
	printf ("El resultado de elevar %.2lf\n a la potencia %.2lf es: %.2lf", x, pot, resultado);
	return 0;
}

double elevarPotencia (double x){
	return pow(x,y); 
}
