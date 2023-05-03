#include <stdio.h>
int main() {
	float sumaPagos=0, pago;
	int i=0;
	do {
		printf("Introduzca el pago %d\t",i+1);
		scanf("%f",&pago);
		sumaPagos+=pago;
		i++;

	} while(pago);//pago!=0


	printf("\n El total de los pagos recibidos es: \t %.2f", sumaPagos);
	printf("\n El total de ventas es: \t %d \n", i-1);
	return 0;
}