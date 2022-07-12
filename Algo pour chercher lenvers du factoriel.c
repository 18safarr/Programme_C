#include<stdio.h>
int main(void)
{
	int i,n,p=1;
	i=0;
	
	printf("Donner un nombre \n");
	scanf("%d",&n);
	while (p<n)
	{
		i=i+1;
		p=p*i;
    }
    (p==n)? printf(" %d ! = %d",i,n) : printf("Pas de factoriel qui est egale a %d",n);
	return 0;
}