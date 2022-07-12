#include<stdio.h>
int main(void)
{
	int tab[]={5,15,34,54,14,2,52,72};
	int *p; int *q;
	p=&tab[1]; q=&tab[5];
	//Quelle est la valeur de *(p+3)
	printf("La valeur de *(p+3) = %d \n",*(p+3));
	//Quelle est la valeur de *(q-3)
	printf("La valeur de *(q-3) = %d \n",*(q-3));

	return 0;
}