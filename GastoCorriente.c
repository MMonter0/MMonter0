#include<stdio.h>

int main ()
{
	int gasto;
	float tarifa;
	printf ("Ingresa el gasto de corriente electrica:");
	scanf ("%d", &gasto);

	if (gasto<1000) {
		tarifa=1.2;
	}
	else if(1000>=gasto && gasto<=1850) {
        tarifa=1.0;
	}
    else if(gasto>1850) {
        tarifa=0.9;
    }
        printf ("El gasto que ingresaste es de %d, por lo tanto la tarifa que te corresponde es de $%0.2f\n", gasto, tarifa);

	return 0;
}