#include<stdio.h>
#include<math.h>
int main()
    {
        int OP, T;
        float RES;
        printf("Introduce la opcion que deseas:\t");
        scanf("%d", &OP);
        printf("\a\nIntroduce la variable a operar:\t");
        scanf("%d", &T);
 

       if(OP == 1) {
        RES=(float)T/5;
       }
       else if(OP == 2) {
        RES=pow(T,T);
       }
       else if(OP == 3) {
        RES=6*(float)T/2;
       }
       else {
        RES = 1;
       }
        printf("El resultado es: %0.2f", RES);

        return 0;
    }