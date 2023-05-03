#include <stdio.h>
int main(void)
{
	float SUM=0, NUM, N;
	int I;

	printf ("Cuantos numeros deseas sumar?:");
	scanf ("%f", &N);

	for (I=1; I<=N; I++)
	{
		printf("\nIngresa el numero:");
		scanf("%f",&NUM);
		//if (NUM>0);
		SUM+=NUM;
	}
	printf ("\n\n La suma de los numeros es: %0.2f", SUM);
	return 0;
}

//CUANTOS NUMEROS DESEA 3
//DAME EL numero 1
//Dame el numero 2
//Dame el numero 3
//El resultado de la suma es: 6
//Git-hub//