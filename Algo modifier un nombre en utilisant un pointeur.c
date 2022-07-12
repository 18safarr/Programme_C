#include<stdio.h>
int main(void)
{
	int i=18;
	int *p=&i;
	*p=10;
	printf("[%d]  ",i);

	return 0;
}