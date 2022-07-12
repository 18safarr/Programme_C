#include<stdio.h>
int Suite(int n)
{
	if (n==1)
	return 1;
	else
	if(n>1)
	return Suite(Suite(n-1))+Suite(n-Suite(n-1)) ;
}
int main(void)
{
	int n,Un;
	int N;
	printf("afficher %d \n",N);
	N=10;
	do 
	{
		printf("Donner un entier strictement superieur a 1 \n");
		scanf("%d",&n);
    }while(n<=1);
    Un=Suite(n);
    printf("U%d = %d \n",n,Un);

	return 0;
}