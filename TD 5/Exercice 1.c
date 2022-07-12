#include<stdio.h>
void echange(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main(void)
{
	int a,b;
	printf("Donner un entier a \n");
	scanf("%d",&a);
	printf("Donner un entier b \n");
	scanf("%d",&b);
	echange(&a,&b);
	printf("Apres echange a = %d   b = %d \n",a,b);

	return 0;
}