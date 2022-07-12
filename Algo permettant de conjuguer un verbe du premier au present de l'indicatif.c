#include<stdio.h>
#include<string.h>
int main(void)
{
	char verb[20];
	do 
	{
	printf("\t Donner un verbe du premier \n");
	scanf("%s",verb);
	}
	while ((verb[strlen(verb)-2]!='e')||(verb[strlen(verb)-1]!='r'));
	printf("\t au present de l'indicatif est \n");
	verb[strlen(verb)-1]=' ';
	printf("Je %s  \n",verb);
	verb[strlen(verb)-1]='s';
	printf("Tu %s \n",verb);
	verb[strlen(verb)-1]=' ';
	printf("Il / Elle %s \n",verb);
	if(verb[strlen(verb)-3]!='g')
	{
	verb[strlen(verb)-2]='o';
	verb[strlen(verb)-1]='n';
	printf("Nous %ss \n",verb);
	}
	else
	{
		verb[strlen(verb)-2]='e';
		verb[strlen(verb)-1]='o';
		printf("Nous %sns \n",verb);
    }
	verb[strlen(verb)-2]='e';
	verb[strlen(verb)-1]='z';
	printf("Vous %s \n",verb);
	verb[strlen(verb)-1]='n';
	printf("Ils / Elles %st",verb);
	
	
	return 0;
}