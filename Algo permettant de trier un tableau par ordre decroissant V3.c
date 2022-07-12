#include<stdio.h>
int main(void)
{
	int tab[7], i,j,c;
	printf("Donner les elements du tableau \n");
    for(i=0;i<7;i++)
        scanf("%d",&tab[i]);
    for(j=0;j<6;j++)
    	for (i=j+1;i<7;i++)
            if(tab[j]<tab[i])
            {
                c=tab[i];
                tab[i]=tab[j];
                tab[j]=c;
            }
            printf("Apres tri par ordre decroissant on a \n");
    for(i=0;i<7;i++)
        printf("[%d] ",tab[i]);
    
	return 0;
}