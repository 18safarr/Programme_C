#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("Donner a \n");
	scanf("%d",&a);
	printf("Donner b \n");
	scanf("%d",&b);
	printf("Avant l'echange \n a = %d \n b = %d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("Apres l'echange \n a = %d \n b = %d \n",a,b);
	
	

	return 0;
}