#include<stdio.h>
void MinMax(int *tab,int n,int *min,int *max,int *i)
{
	if (*i<n)
	{
		if (*max<tab[*i])
		*max=tab[*i];
		if (*min>tab[*i])
		*min=tab[*i];
		*i+=1;
		MinMax(tab,n,min,max,i);
    }
}

int main(void)
{
	int tab[7]={67,32,976,23,-5,2};
	int i=0,MAX,MIN;
	MAX=tab[0];
	MIN=tab[0];
	MinMax(tab,7,&MIN,&MAX,&i);
	printf("le maximum du tableau est %d et le minimum est %d \n",MAX,MIN);
	

	return 0;
}