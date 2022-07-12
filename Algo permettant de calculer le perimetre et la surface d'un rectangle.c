#include<stdio.h>
int main(void)
{ 
	unsigned int longueur,largeur,perimetre,surface;
	printf("Donner la longueur \n");
	scanf("%d",&longueur);
	printf("Donner la largeur \n");
	scanf("%d",&largeur);
	perimetre=(longueur+largeur)*2;
	surface=longueur*largeur;
	printf("le perimetre de ce rectangle est %d et sa surface est %d \n",perimetre,surface);
	return 0;
}