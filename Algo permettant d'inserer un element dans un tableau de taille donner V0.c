#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int n,p,taille=5;
	int *tab=&taille;
	int a,i=0;
	printf("Donner la taille du tableau \n");
	scanf("%d",&taille);
	tab=malloc(sizeof(int)*taille);
	for(i=0;i<taille;i++)
	{
        printf("Donner tab[%d] /n",i);
		scanf("%d",&tab[i]);
    }
    printf("Donner l'element que vous voulez inserer dans le tableau \n");
    scanf("%d",&n);
    printf("Donner la position \n");
    scanf("%d",&p);
     taille=taille+1;
    realloc(tab,sizeof(int)*(taille));
    i=0;
   tab[taille-1]=n;
   if (p>6)
   {
   do 
   {
   	a=tab[(taille-1)-i];
   	tab[(taille-1)-i]=tab[(taille-2)-i];
   	tab[(taille-2)-i]=a;
   	i=i+1;
   }
   while (i<=((taille-2)-p+1));
   }

    for (i=0;i<taille;i++)
    printf("[%d] ",tab[i]);

	return 0;
}