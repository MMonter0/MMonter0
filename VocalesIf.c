#include<stdio.h>

int main() {
	char let;

	printf("Ingresa una letra:\n");
	scanf("%c", &let);

	if(let=='a' || let =='A') {
		printf("La letra %c que ingresaste SI es una vocal.\n", let);
	}
    
	else if(let=='e'|| let=='E') {
		printf("La letra %c que ingresaste SI es una vocal.\n",let);
	}
 
	else if(let=='i'|| let=='I') {
		printf("La letra %c que ingresaste SI es una vocal.\n", let);
	}
 
	else if(let=='o' || let=='O') {
		printf("La letra %c que ingresaste SI es una vocal.\n", let);
	}
	else if(let=='u'|| let=='U') {
		printf("La letra %c que ingresaste SI es una vocal.\n", let);
	}
	else 
		printf("La letra %c que ingresaste NO es una vocal.\n", let);
	return 0;
}