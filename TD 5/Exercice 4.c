#include<stdio.h>
void calculerMinMax(int *T,int N,int *min,int *max)
{
	int i;
	printf("Donner les elements du tableau \n");
	for(i=0;i<N;i++)
	scanf("%d",&T[i]);
	*max=T[0];
	*min=T[0];
	for(i=0;i<N;i++)
	{
	if(*min>T[i])
	*min=T[i];
	if(*max<T[i])
	*max=T[i];
	}
}

int main(void)
{
	int mini,maxi,taille;
	printf("Donner la taille du tableau \n");
	scanf("%d",&taille);
	int tab[taille];
	calculerMinMax(tab,taille,&mini,&maxi);
	printf("le minimum du tableau est %d et le maximum est %d",mini,maxi);

	return 0;
}