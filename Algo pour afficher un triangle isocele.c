#include<stdio.h>
int main(void)
{
	int i,es,j,n;
	printf("Donner un entier \n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
      es=n-i;
      printf("\t\t\t");
      for(j=1;j<=es;j++)
      	printf(" ");
      	
      for(j=1;j<=2*i-1;j++)
      	printf("*");
      	
      printf("  \n");
	}
   	return 0;
	
}