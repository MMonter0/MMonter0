#include <stdio.h>
int main()
{
	int a, b, c, d, e, f, x, y;
	printf ("De acuerdo a la ecuacion que se te presenta a continuacion:\nax+by=c\ndx+ey=f\n");
	printf ("\nIntroduce los coeficientes (a, b, c) de la primera linea:\n");
	scanf ("%d %d %d", &a, &b, &c);
	printf ("Ahora introduce los coeficientes (d, e, f) de la segunda linea:\n");
	scanf ("%d %d %d", &d, &e, &f);
	x=((c*e)-(b*f))/((a*e)-(b*d));
	y=((a*f)-(c*d))/((a*e)-(b*d));
	printf ("De acuerdo a la ecuacion que ingresaste:\n%dx+%dy=%d\n%dx+%dy=%d", a, b, c, d, e, f);
	printf ("\nx=%d y=%d", x, y);
	return 0;
}
