#include<stdio.h>
int main(void)
{
	int i,n,x,expo=1;
	printf("Donner un entier \n");
	scanf("%d",&n);
	printf("Donner son exposant \n");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
        expo*=n;
    printf("%d^%d = %d",n,x,expo);
	return 0;
}