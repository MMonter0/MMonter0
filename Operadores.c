#include <stdio.h>
#include <math.h>
int main(void)
{
	int a, b, prod, coci, resi;

	printf ("Inserta los dos numeros que quieres operar:\n");
	scanf ("%d %d", &a,&b);
	prod=a*b;
	coci=a/b;
	resi=a%b;
	printf ("El producto de %d y %d es: %d", a, b, prod);
	printf ("\nEl cociente de %d/%d es: %d y su residuo es: %d\n", a, b, coci, resi);

	return 0;
}