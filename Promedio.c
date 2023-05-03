#include <stdio.h>
int main()
{
    float prom;
    int num1, num2, num3, num4;
    printf ("Anota las 4 calificaciones a promediar:\n");
    scanf ("%d %d %d %d", &num1, &num2, &num3, &num4);
    prom = (float)(num1+num2+num3+num4)/4;

    if(prom > 5.9) {
        printf ("Tu promedio es de %0.2f,\nFelicidades, aprobaste!", prom);
    }
    else
        printf ("Tu promedio es de %0.2f,\nQue pena, reprobaste!", prom);
    return 0;
}