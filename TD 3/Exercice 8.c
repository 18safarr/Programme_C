#include<stdio.h>
#include<string.h>
typedef struct temps
{
	int jour;
	char mois[10];
	int annee;
}Date;
int main(void)
{
	Date date[3];
	int jr,an;
	char ms[10];
	int i;
	date[0].jour=18; strcpy(date[0].mois,"avril"); date[0].annee=1997;
	date[1].jour=02; strcpy(date[1].mois,"decembre"); date[1].annee=1997;
	date[2].jour=01; strcpy(date[2].mois,"janvier"); date[2].annee=1997;
	for(i=0;i<3;i++)
	printf("Le %d / %s / %d \n",date[i].jour,date[i].mois,date[i].annee);
	printf("Donner le jour que vous cherchez (1--->31) \n");
	scanf("%d",&jr);
	printf("Donner le mois (janvier---->decembre) \n");
	scanf("%s",ms);
	printf("Donner l'annee \n");
	scanf("%d",&an);
	i=0;
	while(((date[i].jour!=jr)||(date[i].mois!=ms)||(date[i].annee!=an))&&(i<3))
	i+=1;
	if (i==3)
	printf("Date non trouvee \n");
	else
	printf("Date trouvee\n");
	return 0;
}