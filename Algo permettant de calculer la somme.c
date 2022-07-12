#include <stdio.h>
int main (void)
{ 
	int i,n,somme=0;
	do 
	 {
	printf("Donner un nombre positif \n");
	scanf("%d",&n);
	 }
	while (n<0);
	for ( i= 0; i<=n;  i=i+1)
	{
		somme=somme+i;
    }
        printf("La somme de 0 a %d est egeal a %d",n,somme);
        return 0;
}