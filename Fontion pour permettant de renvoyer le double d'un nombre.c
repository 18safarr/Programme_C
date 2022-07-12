#include <stdio.h>
int Double(int a)
{
	return 2*a;
}
int main(void)
{
	int n;

	printf("Donner un nombre \n");
	scanf("%d",&n);
	printf("Le double de %d est %d",n,Double(n));

	return 0;
	
}