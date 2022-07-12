#include<stdio.h>
int somme_R(int n)
{
	if(n==0)
		return 0;
	return(n+somme_R(n-1));
}
int somme_I(int n)
{
	int i,somme=0;
	for(i=1;i<=n;i++)
		somme=somme+i;
	return somme;
}
int main(void)
{
	int add,n;
	printf("Donner un entier \n");
	scanf("%d",&n);
	add=somme_I(n);
	printf("Avec fonction iterative la somme des %d premiers entier est %d \n",n,add);
	add=somme_R(n);
	printf("Avec la fonction recursive la somme des %d premiers entiers est %d \n",n,add);

	return 0;
}