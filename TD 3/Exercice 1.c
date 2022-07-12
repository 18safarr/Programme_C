#include<stdio.h>
int main(void)
{
	int i,N,somme=0;
	do 
	{
		printf("Donner la taille du tableau \n");
		scanf("%d",&N);
    }while((N<=0)||(N>50));
    int tab[N];
	printf("Donner les elements du tableau \n");
	for(i=0;i<N;i++)
	scanf("%d",&tab[i]);
	
	for(i=0;i<N;i++)
	somme+=tab[i];
	
	printf("La somme des elements du tableau est %d",somme);
    
	return 0;
}