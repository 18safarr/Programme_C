#include<stdio.h>
int puissance(int a , int n)
{
	if (n==0)
	return 1;
	return(a*puissance(a,n-1));
}
int main(void)
{
	int x,e,p;
	printf("Donner un entier \n");
	scanf("%d",&x);
	printf("Donner l'exposant \n");
	scanf("%d",&e);
	p=puissance(x,e);
	printf("%d a la puissance  de %d est %d",x,e,p);

	return 0;
}
