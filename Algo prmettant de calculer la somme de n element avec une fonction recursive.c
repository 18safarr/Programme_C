#include<stdio.h>
int somme(int a)
{
	if (a==0)
	return 0;
	return(a+somme(a-1));
}
int main(void)
{
	int somm,n;
	printf("donner un enier \n");
	scanf("%d",&n);
	somm=somme(n);
	printf("la somme des %d element est %d",n,somm);

	return 0;
}