#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n,i, taille=0;
	int *tab=&taille;
	printf("donner la taille du tableau \n");
	scanf("%d",&taille);
	
	tab=calloc(taille, sizeof(int));
	
	for(i=0;i<taille;i++)
	printf("[%d] ",tab[i]);
	
	printf("Entrer la valeur a ajouter \n");
	scanf("%d ",&n);
	printf("\n");
	taille=taille+1;
	realloc(tab, sizeof(int)*taille);
	 tab[taille-1]=n;
	 
	 for(i=0;i<taille;i++)
	printf("[%d] ",tab[i]);
	free(tab);
	
	

	return 0;
}