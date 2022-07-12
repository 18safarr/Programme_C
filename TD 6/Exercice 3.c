#include<stdio.h>
void MinMax(int *tab,int n,int *min,int *max)
{
	int i;
	i=0;
	while (i<n)
	{
		if (*max<tab[i])
		*max=tab[i];
		if (*min>tab[i])
		*min=tab[i];
		i=i+1;
		//MinMax(tab,n,min,max);
    }
}

int main(void)
{
	int tab[7]={67,-32,976,23,-5,2};
	int MAX,MIN;
	MAX=tab[0];
	MIN=tab[0];
	MinMax(tab,7,&MIN,&MAX);
	printf("le maximum du tableau est %d et le minimum est %d \n",MAX,MIN);
	

	return 0;
}