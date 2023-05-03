#include<stdio.h>

int main() {
	float sumaPagos=0, pago;

	printf("\nIntroduce la cantidad a pagar:\t");
	scanf("%f", &pago);

	while(pago !=0) {
		sumaPagos+=pago;
		//sumaPagos = sumaPagos+pago;

		printf("\nIntroduce la cantidad a pagar:\t");
		scanf("%f", &pago);
	}
	printf("\n El total de los pagos recibidos es:%f", sumaPagos);
}