#include<stdio.h>
#define TAILLE 5
int main(void)
{
	int tab[TAILLE] = {24, 100,20,12,25};
	int i=0;
	while ((tab[i]!=25)&&(i<=TAILLE-1))
	{
		i=i+1;
    }
    (i==5)? printf("Le tableau ne contient pas 25 ") : printf("Le tableau contient 25");

	return 0;
}