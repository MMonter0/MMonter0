#include <stdio.h>
#define PI 3.1416
int main()
{
    float r, p, s;
    printf ("Inserta el radio de tu circulo: \n");
    scanf ("%f", &r);
    p= r*PI*2;
    s= r*r*PI;
    printf ("Dado el radio: %0.1f cm \nPerimetro: %0.2f cm \nSuperficie: %0.3f cm^2", r, p, s);
    return 0;
}