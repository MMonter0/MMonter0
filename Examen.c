#include <stdio.h>

int
main ()
{
  int i, vidau, a;
  float costorig, valrecup, depracum, valanual, depr;
  printf ("Ingresa el ano de compra del automovil?\n");
  scanf ("%d", &a);
  printf ("Ingresa el costo de del automovil?\n");
  scanf ("%f", &costorig);
  printf ("Cuantos anos de utilidad deseas calcular?\n");
  scanf ("%d", &vidau);
  depr = (float) ((costorig - 3000) / vidau);
  printf ("%f", depr);
  for (i=1; i<=vidau; i++);
     {
     printf
     ("%d(%d)\tDepreciacion:%f\tDepreciacion Acumulada:%f\tValor Anual:%f",
     i-1, a++, depr, depracum, valanual);
     depracum=depracum+depr;
     valanual=valanual-depr;}
  return 0;
} 
