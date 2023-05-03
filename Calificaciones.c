#include<stdio.h>

int main ()
{
	int pnt1, pnt2, pnt3, pnt4,media;
	char notfnl;
	printf ("Ingresa las 4 puntuaciones que recibiste:\n");
	printf ("*Nota: Recuerda que son enteros entre 0 y 100.*\n");
	scanf ("%d %d %d %d", &pnt1, &pnt2, &pnt3, &pnt4);

	media=(pnt1+pnt2+pnt3+pnt4)/4;

	if (media>=0 && media<=59) {
		notfnl='E';
	}
	else if(media>=60 && media<=69) {
        notfnl='D';
	}
    else if(media>=70 && media<=79) {
        notfnl='C';
    }
    else if(media>=80 && media<=89) {
        notfnl='B';
    }
    else if(media>=90 && media<=100) {
        notfnl='A';
    }
        printf ("De acuerdo a tu promedio que es %d puntos, tu nota final es %c\n", media, notfnl);

	return 0;
}