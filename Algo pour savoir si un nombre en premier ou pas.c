#include<stdio.h>
#define debut main
int debut(void)
{
	int a,i,j;
	printf("Donner un entier \n");
	scanf("%d",&a);
	i=1;
	j=0;
	while ((j<=2)&&(i<=a))
	{
		if (a%i==0)
		j=j+1;
		i=i+1;
    }
    (j==2)? printf("%d est un nombre premier ",a): printf("%d n'est pas un nombre premier",a);
	return 0;
}