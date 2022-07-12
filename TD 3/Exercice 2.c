#include<stdio.h>
int main(void)
{
	int N,i,min;
	do 
	{
		printf("Donner la taille du tableau \n");
		scanf("%d",&N);
    }while((N<=0)||(N>50));
    int tab[N];
	printf("Donner les elements du tableau \n");
	for(i=0;i<N;i++)
		scanf("%d",&tab[i]);
	min=tab[i];
	for(i=1;i<N;i++)
		if(min>tab[i])
			min=tab[i];
	printf("Le plus petit element du tableau est %d",min);
	return 0;
}