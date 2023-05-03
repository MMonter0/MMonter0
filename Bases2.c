#include<stdio.h>

int main() {

	int base10;
	int baseN;
	char res[50]; //array que almacena los residuos según los va calculando
	int nRes = 0;
	char res2[50]; //array que almacena los residuos con la lectura inversa (resultado final)

	printf("Ingresa un numero en base decimal:");
	scanf("%d", &base10);
	printf("\nIngresa la base a la que quieres cambiar:");
	scanf("%d", &baseN);

	int q = base10;
	int r = 0;
	//calcula residuos hasta que el cociente es 0
	do{
		r = q % baseN; //calcula residuo

		q = q / baseN; //recalcula la nueva "q" para la siguiente iteración

		res[nRes] = r; //concatena el residuo al resultado

		nRes++; //número de cifras del resultado

	}while(q > 0);
	//invierte el resultado (la lectura de los residuos es invertida)
	for(int i = (nRes - 1); i >= 0; i--) res2[nRes - i - 1] = res[i];

	printf("\n%d en base %d es: ", base10, baseN);	
	for(int i = 0; i < nRes; i++) printf("%i", res2[i]);

	return 0;

}