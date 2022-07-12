#include<stdio.h>
int main(void)
{
	int i,etape,echange,n;
	printf("Donner la taille du tableau \n");
	scanf("%d",&n);
	int tab[n];
	printf("Donner les elements du tableau \n");
	for(i=0;i<n;i++)
	scanf("%d",&tab[i]);
	do 
	{
		etape=0;
		for(i=0;i<n-1;i++)
		{
			if(tab[i]>tab[i+1])
			{
				echange=tab[i];
				tab[i]=tab[i+1];
				tab[i+1]=echange;
				etape=1;
            }
        }
    }while(etape!=0);
    printf("Apres triage \n");
	 for(i=0;i<n;i++)
	 printf("tab[%d]=%d \n",i,tab[i]);

	return 0;
}