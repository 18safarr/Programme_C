#include<stdio.h>
main(void)
{ 
	float devoir,examen,moyenne;
printf("Donner la note du devoir \n");
scanf("%f",&devoir);
printf("Donner la note de l'examen \n");
scanf("%f",&examen);
moyenne=0.4*devoir+0.6*examen;
printf("la moyenne de l'EC est %.2f.\n",moyenne);
	return 0;
	}