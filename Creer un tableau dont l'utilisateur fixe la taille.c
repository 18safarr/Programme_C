#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, taille=0;
	int *tab=&taille;
	
	printf("Donner la taille du tableau \n");
	scanf("%d",&taille);
	
	tab=malloc(sizeof(int)*taille);      //Allocation dynamique de la de la memoire 
	
	if(tab==0)
	exit(1);
	
	for (i=0;i<taille;i++)
	scanf("%d",&tab[i]);
	
	for(i=0;i<taille;i++)
	printf("[%d] ",tab[i]);
	
	free(tab);  //Liberer l'espace allouer dynamiquement

	return 0;
}