#include <stdio.h>
int main (void)
{
  int i, vidau, a;
  float costorig, valrecup, depracum=0, valanual, depr;
  printf ("Ingresa el año de compra del automovil?\n");
  scanf ("%d", &a);
  printf ("Ingresa el costo del automovil?\n");
  scanf ("%f", &costorig);
  printf ("Cuantos años de utilidad deseas calcular?\n");
  scanf ("%d", &vidau);
  printf ("#  Año:\tDepreciacion:\tDepreciacion Acumulada:\tValor Anual:\n");

  depr = (float) ((costorig - 3000) / vidau);

  for (i=0; i<=vidau; i++);
     {
     printf ("%d  (%d)\t%f\t%f\t\t%f\n", i-1, a, depr, depracum, valanual);
     depracum+=depr;
     valanual-=depr;
   }
  return 0;
} 