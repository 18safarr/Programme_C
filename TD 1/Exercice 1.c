#include<stdio.h>
int main(void)
{
	int entier;
	printf("Donner un entier \n");
	scanf("%d",&entier);
	(entier%2==0)? printf("%d est paire",entier) : printf("%d est impaire",entier);
	return 0;
}