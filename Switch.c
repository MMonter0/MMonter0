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
 

       switch (OP)
       {
        case 1:
        RES=(float)T/5;
        break;
        case 2:
        RES=pow(T,T);
        break;
        case 3:
        case 4:
        RES=6*(float)T/2;
        break;
        default:
        RES = 1;
        break;
       }
        printf("El resultado es: %0.2f", RES);

        return 0;
    }