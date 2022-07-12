#include<stdio.h>
int main(void)
{
	int entier,n,i;
	printf("Donner un entier \n");
	scanf("%d",&entier);
	printf("Combien d'entiers qui suit %d voulez-vous aficher \n ",entier);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("%d \n",entier+i);
	return 0;
}