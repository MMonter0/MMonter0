#include<stdio.h>

int main() {
	float sumaPagos=0, pago=1;
	int i=0;

	while(pago !=0) {;
		printf("\nIntroduce la cantidad %d a pagar:\t", i+1);
		scanf("%f", &pago);
		sumaPagos+=pago;
		i+=1;
	}
	
	printf("\n El total de los pagos recibidos es:%f", sumaPagos);
	printf("\n El total de ventas es: %d", i-1);
}