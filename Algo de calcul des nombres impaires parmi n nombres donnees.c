#include <stdio.h>
int main(void)
{
	int n,i,somme=0;
	do 
	{
		printf("Donner un nombre positif \n" );
		scanf("%d",&n);
    }
    while (n<=0);
    for (i=1; i<=n; i=i+1)
    {
      (i % 2 !=0)? somme=somme+i: printf;
     }
      printf("La somme des nombres paire dans ses %d nombres est %d",n,somme);

	return 0;

}