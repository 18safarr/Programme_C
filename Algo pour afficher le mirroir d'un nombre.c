#include<stdio.h>
int main(void)
{
	int nombre,reste,n,resultat=0;
	printf("Donner un nombre \n");
	scanf("%d",&nombre);
	n=nombre;
	while (nombre>0 )
	{
		reste=nombre % 10;
		nombre=nombre/10;
		resultat=resultat*10+reste;
    }
    printf("Le nombre mirroir de %d  est %d ",n,resultat);

	return 0;
}