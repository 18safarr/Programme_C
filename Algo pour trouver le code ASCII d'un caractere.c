#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char c;
	printf("Bonjour tout le monde \1  \2  \3  \4  \5 ");
	printf("Donner une lettre de l'alphabet \n");
	 scanf("%c",&c);                           //c=getchar(); 
	printf("Le code ASCII de %c est  %d ",c,c);
	
	return 0;

}