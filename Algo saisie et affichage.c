#include <stdio.h>
int main(void)
{ 
	int age=0;
	char prenom[20],nom[10];
	printf("Donner votre prenom \n");
	 scanf("%s",prenom); // les chiane de caracteres n'auront  pas de  &dans le scanf
	 printf("Donner votre nom \n");
	 scanf("%s",nom);
	 printf("Quelle est on age \n");
	 scanf("%d",&age);
	 printf("Vous vous appelez %s %s vous etes age de %d ans. \n",prenom,nom,age);
	return 0;
}