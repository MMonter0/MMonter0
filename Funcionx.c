#include<stdio.h>
#include<math.h>
int main()
    {
        float x, fx;
        printf("Ingresa el valor de x que deseas evaluar:\n");
        scanf("%f", &x); 

       if (x<0) {
        fx=pow(x,2);
        printf ("Se evalua %0.2f en x^2", x);
        }
        else if(x>=0) {
        fx=pow(x,3);
        printf ("Se evalua %0.2f en x^3", x);
        }
        printf ("\nEl resultado del valor que ingresaste es: %0.2f.\n", fx);

        return 0;
    }