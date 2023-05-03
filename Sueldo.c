#include <stdio.h>
int main(void)
{
	float NOM=0, SAL;
	int i; /*se puede declarar e iniciar desde for*/

	printf ("Introduce el salario:");
	scanf ("%d", &i);

	for (i=1; i <=15; i++) /*inicio, condición de paro, incremento/decremento*/
	{
		printf("\nIntroduce el salario del profesor:");
		scanf("%f",&SAL);
		NOM+=SAL;
	}
	printf ("\n\n La suma de salarios es: %f", NOM);
	return 0;
}