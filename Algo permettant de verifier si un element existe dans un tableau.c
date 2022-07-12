#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int tab[5]={5,25,6,8,9};
	int n,i=0;
	printf("Donner l'entier que vous voulez rechercher \n");
	scanf("%d",&n);
	while((i<5)&&(tab[i]!=n))
	{
		i=i+1;
    }
    if (i==5)
    printf("%d ne se trouve pas dans le tableau",n);
    else
    printf("%d se trouve dans le tableau",n);
    
	return 0;
}