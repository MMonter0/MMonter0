#include <stdio.h>
int main()
{
	float TSE,VMS,VKH;
    int m,s,c,dis;
	printf ("Inserta el tiempo en: m,s,c que te tardaste en llegar:\n");
	scanf ("%d %d %d", &m, &s, &c);
	printf ("Inserta la distancia que recorriste (metros):\n");
	scanf ("%d", &dis);
	TSE=(float)(m*60)+s+(c/100);
	VMS=(float)dis/TSE;
	VKH=(float)(VMS*3600)/1000;
	printf ("La velocidad en kilometros por hora que tuviste en la carrera fue: %0.3f km/h", VKH);
}