#include <stdio.h>
int primo(int);//prototipo

int main(){
	int x, resultado;
	printf("\nDame un numero:\n");
	scanf("%d",&x);dehfireyfv,lwlrkyh.,w4ekrhyf

	resultado = primo(x);

	if (resultado)
		printf("El numero %d es primo\n", x);
	else 
		printf ("El numero %d no es primo\n",x);
}

//definicion funcion
int primo(int x) {
	int z= 0, y , resultado;
	if (x==0 || x==1)
		return 0;
	else {
		for(int i=1 ;i<=x; i++){ //(int i=x; i<=0; i--)
			y=x%i;
		if(y==0)
			z++;
	}
	if(z==2)
		return 1;
	else
		return 0;
	}
}