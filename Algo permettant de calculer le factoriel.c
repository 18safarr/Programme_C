#include<stdio.h>
int main(void)
{
	int a,i,fact=1;
	printf("Donner un entier \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact*=i;
    }
	printf("%d! = %d",a,fact);

	return 0;
}