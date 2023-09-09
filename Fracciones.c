#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void simplificar(int *a, int *b);

struct fraccion {
  int num;
  int den;
  int pot;
} *f1, *f2, *f3;

int main() {
     int opcion = 0;
     int i, div, multiplo, menor;
          do {
          system("cls");
          printf("/* NUMEROS FRACCIONARIOS */\n");
          printf("Elija una opcion:\n\n");
          printf("1. Suma.\n");
          printf("2. Resta.\n");
          printf("3. Multiplicacion.\n");
          printf("4. Division.\n");
          printf("5. Potencia.\n");
          printf("------------------\n");
          printf("6. Simplificar.\n");
          printf("7. Numerador.\n");
          printf("8. Denominador.\n");
          printf("9. Salir.\n");

          scanf("%d",&opcion);

          switch(opcion){
               case 1:{
                    system("cls");
                    printf("SUMA\n");
                     f1 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f2 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f3 = (struct fraccion *)malloc(sizeof(struct fraccion));
                    printf("Ingresa tu fraccion 1: ");
                    scanf("%d",&(f1->num));
                    getchar(); scanf("%d",&(f1->den));
                    printf("Ingresa tu fraccion 2: ");
                    scanf("%d",&(f2->num));
                    getchar(); scanf("%d",&(f2->den));
                    system("cls");
                    printf("SUMA\n");
                    printf("Fracciones registradas: %d/%d + %d/%d\n", f1->num, f1->den, f2->num, f2->den);
                    //Denominadores iguales
                    if (f1->den == f2->den) {
                    f3->den = f1->den;
                    f3->num = (f1->num + f2->num);
                    }  
                    //Denominadores diferentes
                    else {
                    f3->den = (f1->den * f2->den);
                    f1->num *= f2->den;
                    f2->num *= f1->den;
                    f3->num = (f1->num + f2->num);}
                    printf ("Resultado: %d/%d", f3->num, f3->den);
                    simplificar(&(f3->num), &(f3->den));
                    free(f1); free(f2); free(f3);
                    printf("\n\nPresione una tecla para continuar. ");     
                    getchar();                
                    getchar();   
                    break;
               }
                    

               case 2:{
                    system("cls");
                    printf("RESTA\n");
                     f1 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f2 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f3 = (struct fraccion *)malloc(sizeof(struct fraccion));
                    printf("Ingresa tu fraccion 1: ");
                    scanf("%d",&(f1->num));
                    getchar(); scanf("%d",&(f1->den));
                    printf("Ingresa tu fraccion 2: ");
                    scanf("%d",&(f2->num));
                    getchar(); scanf("%d",&(f2->den));
                    system("cls");
                    printf("RESTA\n");
                    printf("Fracciones registradas: %d/%d - %d/%d\n", f1->num, f1->den, f2->num, f2->den);
                    //Denom igual
                    if (f1->den == f2->den) {
                    f3->den = f1->den;
                    f3->num = (f1->num - f2->num); }  
                    //Denom dif
                    else {
                    f3->den = (f1->den * f2->den);
                    f1->num *= f2->den;
                    f2->num *= f1->den;
                    f3->num = (f1->num - f2->num); }
                    printf ("Resultado: %d/%d", f3->num, f3->den);
                    simplificar(&(f3->num), &(f3->den));
                    free(f1); free(f2); free(f3);
                    printf("\n\nPresione una tecla para continuar. ");     
                    getchar();                
                    getchar();   
                    break;
               }


               case 3:{
                    system("cls");
                    printf("MULTIPLICACION\n");
                     f1 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f2 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f3 = (struct fraccion *)malloc(sizeof(struct fraccion));
                    printf("Ingresa tu fraccion 1: ");
                    scanf("%d",&(f1->num));
                    getchar(); scanf("%d",&(f1->den));
                    printf("Ingresa tu fraccion 2: ");
                    scanf("%d",&(f2->num));
                    getchar(); scanf("%d",&(f2->den));
                    system("cls");
                    printf("MULTIPLICACION\n");
                    printf("Fracciones registradas: %d/%d / %d/%d\n", f1->num, f1->den, f2->num, f2->den);                   
                    f3->num = (f1->num * f2->num);
                    f3->den = (f1->den * f2->den);
                    printf ("\nResultado: %d/%d", f3->num, f3->den);
                    simplificar(&(f3->num), &(f3->den));
                    free(f1); free(f2); free(f3);
                    printf("\n\nPresione una tecla para continuar. ");     
                    getchar();                
                    getchar();   
                    break;
               }


               case 4:{
                    system("cls");
                    printf("DIVISION\n");
                    printf("Ingresa tu fraccion 1: ");
                    scanf("%d",&(f1->num));
                    getchar(); scanf("%d",&(f1->den));
                    printf("Ingresa tu fraccion 2: ");
                    scanf("%d",&(f2->num));
                    getchar(); scanf("%d",&(f2->den));
                    system("cls");
                    printf("DIVISION\n");
                    printf("Fracciones registradas: %d/%d * %d/%d\n", f1->num, f1->den, f2->num, f2->den);                   
                    f3->num = (f1->num * f2->den);
                    f3->den = (f1->den * f2->num);
                    printf ("Resultado: %d/%d", f3->num, f3->den);
                    simplificar(&(f3->num), &(f3->den));
                    free(f1); free(f2); free(f3);
                    printf("\n\nPresione una tecla para continuar. ");     
                    getchar();                
                    getchar();   
                    break;
               }


               case 5:{
                    system("cls");
                    printf("POTENCIA\n");
                     f1 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f2 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f3 = (struct fraccion *)malloc(sizeof(struct fraccion));
                    printf("Ingresa tu fraccion: ");
                    scanf("%d",&(f1->num));
                    getchar(); scanf("%d",&(f1->den));
                    printf("A que potencia deseas elevar tu fraccion?: ");
                    scanf("%d",&(f1->pot));
                    system("cls");
                    printf("POTENCIA\n");
                    printf("Fraccion registrada: (%d/%d)^%d\n",f1->num, f1->den, f1->pot);
                     f3->num = pow (f1->num, f1->pot);
                     f3->den = pow (f1->den, f1->pot);
                    printf ("Resultado: %d/%d", f3->num, f3->den);
                    simplificar(&(f3->num), &(f3->den));
                    free(f1); free(f3);
                    printf("\n\nPresione una tecla para continuar. ");     
                    getchar();                
                    getchar();   
                   break;
              }

               case 6:{
                    system("cls");
                    printf("SIMPLIFICAR\n");
                     f1 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f2 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f3 = (struct fraccion *)malloc(sizeof(struct fraccion));
                    printf("Ingresa tu fraccion: ");
                    scanf("%d",&(f1->num));
                    getchar(); scanf("%d",&(f1->den));
                      do {
                         if (f1->num < f1->den)
                            menor = f1->num;
                         else
                            menor = f1->den;
    
                         i=2;
                         div=0;
                         while (i <= menor && div == 0){
                          if (f1->num % i == 0 && f1->den % i == 0){
                              multiplo = i;
                              div = 1;
                              }
                              i++;
                         }

                         if (div == 1){
                             f1->num=f1->num/multiplo;
                             f1->den=f1->den/multiplo;
                              printf("= %d/%d ", f1->num, f1->den);
                         }
                         } while (div==1);
                    
                    printf("\nFraccion simplificada: %d/%d", f1->num, f1->den);
                    free(f1);
                    printf("\n\nPresione una tecla para continuar. ");     
                    getchar();              
                    getchar();   
                    break;
               }

               case 7:{
                    system("cls");
                    printf("NUMERADOR\n");
                     f1 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f2 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f3 = (struct fraccion *)malloc(sizeof(struct fraccion));
                    printf("Ingresa tu fraccion: ");
                    scanf("%d",&(f1->num));
                    getchar(); scanf("%d",&(f1->den));
                    printf ("El numerador es: %d", f1->num);
                    free(f1);
                    printf("\n\nPresione una tecla para continuar. ");     
                    getchar();                
                    getchar();   
                   break;
               }

               case 8:{
                    system("cls");
                    printf("DENOMINADOR\n");
                     f1 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f2 = (struct fraccion *)malloc(sizeof(struct fraccion));
                     f3 = (struct fraccion *)malloc(sizeof(struct fraccion));
                    printf("Ingresa tu fraccion: ");
                    scanf("%d",&(f1->num));
                    getchar(); scanf("%d",&(f1->den));
                    printf ("El denominador es: %d", f1->den);
                    free(f1);
                    printf("\n\nPresione una tecla para continuar. ");     
                    getchar();                
                    getchar();   
                   break;
               }

               case 9:
                    break;

               default:
                    system("cls");
                    printf("Opción no registrada\n");
                    break;
          }          
     } while(opcion != 9);

  return 0;
}

void simplificar(int *a, int *b) {
    int i, menor, div, multiplo;
    do {
        if (*a < *b)
            menor = *a;
        else
            menor = *b;

        i = 2;
        div = 0;
        while (i <= menor && div == 0) {
            if (*a % i == 0 && *b % i == 0) {
                multiplo = i;
                div = 1;
            }
            i++;
        }
        if (div == 1) {
            *a = *a / multiplo;
            *b = *b / multiplo;
        }
    } while (div == 1);
   printf("\nResultado simplificado: %d/%d\n", f3->num, f3->den);

}