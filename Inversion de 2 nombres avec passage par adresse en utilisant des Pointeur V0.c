#include<stdio.h>
int main(void)
{
	int a=12;
	int c,b=15;
	c=a;
	a=b;
	b=c;
	printf("%d et %d \n",a,b);

	return 0;
}