#include<stdio.h>
int main(void)
{
	float rayon;
	const float pii=3.14;
	printf("Donner le rayon du cercle \n");
	scanf("%f",&rayon);
	printf("Le diametre du cercle est : %.2f \n",2*rayon);
	printf("Sa circonference est : %.2f \n",2*pii*rayon);
	printf("Sa surface est : %.2f \n",pii*rayon*rayon);
	return 0;
}