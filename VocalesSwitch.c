#include<stdio.h>

int main() {
	char let;

	printf("Ingresa una letra:\n");
	scanf("%c", &let);

	switch(let) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("La letra que ingresaste es una %c. SI es una vocal.\n", let);
		break;
		default:
		printf("La letra que ingresaste %c. NO es una vocal.\n", let);
		break;
	}
}