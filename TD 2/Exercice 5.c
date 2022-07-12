#include<stdio.h>
int main(void)
{
	int i,n,s=0;
	printf("Donner un entier \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
        s+=i;
    printf("La somme des %d premiers entier est %d",n,s);

	return 0;
}