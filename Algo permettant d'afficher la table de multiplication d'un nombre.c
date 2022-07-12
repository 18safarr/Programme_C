#include<stdio.h>
int main(void)
{
	int i,a;
	printf("Donner un nombre \n");
	scanf("%d",&a);
	for (i=1;i<=10;i+=1)
	{
		printf("%d x %d = %d \n",i,a,i*a);
    }

	return 0;
}