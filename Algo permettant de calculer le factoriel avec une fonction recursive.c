#include<stdio.h>
long double  factoriel(int a)
{
	if (a==0)
	return 1;
	return(a*factoriel(a-1));
}
int main(void)
{
	 long double  fact;
	 int n;
	printf("Donner un entier \n");
	scanf("%d",&n);
	fact=factoriel(n);
	printf("%d= %f",n,fact);
	return 0;
}