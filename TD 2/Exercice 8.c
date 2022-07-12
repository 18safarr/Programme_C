#include<stdio.h>
int main(void)
{
	int a,min,max;
	printf("Donner un entier \n");
	scanf("%d",&a);
	min=a; max=a;
	if(a!=0)
	do 
	{
		printf("Donner un entier \n");
		scanf("%d",&a);
		if (min>a)
            min=a;
		if (max<a)
            max=a;
    }
    while(a!=0);
    printf("Le MAXIMUM est %d et le MINIMUM est %d",min,max);
	
	return 0;
}