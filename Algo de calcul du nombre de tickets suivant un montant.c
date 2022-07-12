#include<stdio.h>
int main(void)
{
	const int TICKET=75;
	unsigned int ticket,montant;
	printf("Donner un montant \n");
	scanf("%d",&montant);
	ticket=montant/TICKET;
	printf("Vous pouvais acheter %d tickets avec %d. \n",ticket,montant);
	
	return 0;
	}