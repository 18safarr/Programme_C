#include<stdio.h>
int minTableau(int N,int T[N])
{
	int min,i,c;
	printf("Donner les elements du tableau \n");
	for(i=0;i<N;i++)
	scanf("%d",&T[i]);
	
	min=T[0];
	for(i=1;i<N;i++)
	 if (min>T[i])
	 {
	 	c=min;
	 	min=T[i];
	 	T[i]=c;
     }
     return min;
}
int main(void)
{
	int n,min;
	printf("Donner la taille du tableau \n");
	scanf("%d",&n);
	int tab[n];
	min=minTableau(n,tab);
	printf("le plus petit element du tableau est %d",min);

	return 0;
}