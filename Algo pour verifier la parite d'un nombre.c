#include<stdio.h>
int main(void)
{
	int a;
	printf("Doner un nombre \n");
	scanf("%d",&a);
	
	(a%2==0)? printf("%d est pair \n",a) : printf(" %d est impair \n",a);

	return 0;
	
}