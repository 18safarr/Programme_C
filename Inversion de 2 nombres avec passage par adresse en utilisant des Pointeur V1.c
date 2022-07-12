#include<stdio.h>
void inverser(int *a, int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main(void)
{
	int a=12;
	int b=15;
	inverser(&a,&b);
	printf("%d et %d",a,b);

	return 0;
}