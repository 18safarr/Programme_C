#include<stdio.h>
int main(void)
{
	int N,i,c;
	do 
	{
		printf("Donner la taille du tableau \n");
		scanf("%d",&N);
    }while((N<=0)||(N>50));
    int tab[N];
	printf("Donner les elements du tableau \n");
	for(i=0;i<N;i++)
	scanf("%d",&tab[i]);
	
	printf("Voici les elements du tableau \n");
	for(i=0;i<N;i++)
	printf("tab[%d]=%d \n",i+1,tab[i]);
	
	for(i=0;(((N-1)-i)>=i);i++)
	{
		c=tab[(N-1)-i];
		tab[(N-1)-i]=tab[i];
		tab[i]=c;
    }
    
	printf("Voici les elements du tableau \n");
	for(i=0;i<N;i++)
	printf("tab[%d]=%d \n",i+1,tab[i]);

	return 0;
}