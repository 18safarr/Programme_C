#include<stdio.h>
#define TAILLE 5
int main (void)
{
	int tab[TAILLE]={8,3,0,2,5};
	int j,i,a;
	for (i=0; i<=TAILLE-1; i++)
	{
		for (j=i+1; j<=TAILLE; j+=1)
		{
			if (tab[j]<tab[i])
			{
				a=tab[i];
				tab[i]=tab[j];
				tab[j]=a;
            }
        }
    }
    for (i=0; i<=TAILLE-1; i++)
    printf("[%d] ",tab[i]);

	return 0;
}