#include<stdio.h>
int main(void)
{
	int i,a,somme=0;
	for (i=1 ; i<=10 ; i=i+1)
	   {
	   	printf("Donner le %dieme nombre .\n",i);
	   	 scanf("%d",&a);
	   	 somme=somme+a;
       }
       printf("La somme est %d",somme);

	return 0;
}