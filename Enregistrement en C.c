#include <stdio.h>
struct info
{
	char prenom[15];
	char nom[10];
	char lieu[20];
	char date[11];
	int telephone;
};
int main(void)
{
	struct info eleve[5];
	int i;
	for (i=0;i<=4;i++)
	{
	printf("Donner votre prenom \n");
	scanf("%s",eleve[i].prenom);
	printf("Donner votre nom \n");
	scanf("%s",eleve[i].nom);
	printf("Donner votre date de naissance ../../....\n");
	scanf("%s",eleve[i].date);
	printf("Donner votre lieu de naissance \n");
	scanf("%s",eleve[i].lieu);
	printf("Donner votre numero de telephone \n");
	scanf("%d",&eleve[i].telephone);
	}
	
	return 0;
}