#include<stdio.h>
int main(void)
{
	int n,i=0;
	printf("Donner un entier \n");
	scanf("%d",&n);
	do 
	{
		if (n%2==0)
		n=n/2;
		else
		n=3*n+1;
		printf("%d      ",n);
		i=i+1;
    }
    while(n!=1);
    printf("\n");
    printf("Le nombre de transformation necessaire avant d'arriver a 1 est : %d  ",i);

	return 0;
}