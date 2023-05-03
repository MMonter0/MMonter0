#include<stdio.h>
#include<math.h>

#define g 6.673e-8

int main() {

	float m1, m2, dis, frzaA;

	printf("Ingresa los valores de la masa 1, masa 2 y de la distancia:\n");
	scanf("%f %f %f",&m1, &m2, &dis);

	frzaA=(g*m1*m2)/pow(dis,2);

printf("\nLa fuerza de atraccion entre la masa 1 y la masa 2 es: %e\n", frzaA);

}