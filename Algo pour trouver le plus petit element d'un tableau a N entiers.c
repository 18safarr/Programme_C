#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,i,min;
	int *tab;
	printf("Donner la taille du tableau \n");
	scanf("%d",&n);
	tab=malloc(sizeof(int)*n);
	printf("Donner les elements du tableau \n");
	for(i=0;i<n;i++)
        {
        	scanf("%d",&tab[i]);
        }
    min=tab[0];
    for(i=1;i<n;i++)
        {
        	if (min>tab[i])
        	min=tab[i];
        }
        printf("Le plus element du tableau est %d",min);
        
        return 0;
}