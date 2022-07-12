#include<stdio.h>
void inverse(int n,int *tab,int *i)
{
	int echange;
	if(*i<=n-1-*i)
	{
	echange=tab[n-1-*i];
	tab[n-1-*i]=tab[*i];
	tab[*i]=echange;
	*i=*i+1;
	inverse(n,tab,i);
	}
	
}


int main(void)
{
	int tab[5]={1,2,3,4,5},i=0;
	inverse(5,tab,&i);
	for(i=0;i<5;i++)
	{
		printf("tab[%d]=%d \n",i,tab[i]);
    }

	return 0;
}