#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int valeur=1+rand()%99;
	int entier,i=0;
	printf("Donner un entier \n");
	do 
	{
		scanf("%d",&entier);
		i=i+1;
		if (valeur>entier)
		printf("Donner un entier plus grand \n");
		else
		if (valeur<entier)
		printf("Donner un entier plus petit \n");
    
    }
    while (valeur!=entier);
    printf("BINGO VOUS AVEZ REUSSI APRES %d ESSAIS",i);

	return 0;
	
}