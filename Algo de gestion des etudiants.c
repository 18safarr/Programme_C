#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct ENREGISTREMENT
{
	char nom[10];
	char prenom[12];
	int age; 
}etudiant;
void remplir(etudiant *list,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Donner les informations de l'etudiant %d\n",i+1);
		printf("Son prenom \n");
		scanf("%s",list[i].prenom);
		printf("Son nom \n");
		scanf("%s",list[i].nom);
		printf("Son age \n");
		scanf("%d",&list[i].age);
	}
}
void afficher(etudiant *list ,int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("L'etudiant %d s'appele %s %s et il est age de %d ans. \n",i+1,list[i].prenom,list[i].nom,list[i].age);
	}
}
void save(etudiant *list,int n,FILE *fichier,int entier)
{
	int i;
	FILE *fic=fopen("save.txt","a+");
	if (fic==NULL)
	{
		printf("oups");
		exit(1);
    }
	for(i=0;i<n;i++)
	{
		if ((i==0)&&(entier==0))
		fputs("Numero           Prenom               Nom            Age \n",fic);
		fprintf(fic,"   %d          %s                      %s          %d \n",i+1+entier,list[i].prenom,list[i].nom,list[i].age);
	}
	fclose(fic);
}
void Menu(void)
{
	printf("\t\t\t CHOISISSEZ UNE OPTION\n");
	printf("\t\t 1===>Afficher la liste des etudiants enregistrer\n");
	printf(" \t\t 2===>Enregitrer de nouveaux etudiant\n");
	printf("\t\t 3===>Afficher la liste des etudiants saisies\n");
	printf("\t\t 4 ===>QUITTER \n");
	
}
int main(void)
{
	int choix,nb,entier=0;
	char ch[256];
	etudiant  *list=NULL;
	FILE *fichier=fopen("save.txt","a+");
	do 
	{
	Menu();
	scanf("%d",&choix);
	switch(choix)
	{
		case 1:
		while(fgets(ch,255,fichier)!=NULL)
		printf("%s \n",ch);
		break;
		
		case 2:
		while (fgets(ch,255,fichier)!=NULL)
		fscanf(fichier,"%d \n",&entier);
		printf("Donner le nombre d'etudiant que vous voulez ajouter \n");
		scanf("%d",&nb);
		list=malloc(sizeof(etudiant)*nb);
		remplir(list,nb);
		save(list,nb,fichier,entier);
		break;
		case 3:
		afficher(list,nb);
		break;
		case 4:
		printf("AU REVOIR \1\2\3\4");
		break;
		default:
		printf("Verifier votre choix \n");
		break;
		
    }
    }
    while(choix!=4);
	
	
	
	free(list);
	fclose(fichier);
	
	

	return 0;
}