#include<stdio.h>
int Fibonacci(int n)
{
	if((n<2)&&(n!=0))
	return 1;
	if(n==0)
	return 0;
	return (Fibonacci(n-1)+Fibonacci(n-2));
}

int main(void)
{
	int n,Un;
	printf("Un = 1 si n < 2 et n<>0\n\n");
	printf("Un = U(n-1) + U(n-2) \n\n\n");
	printf("Donner un entier \n");
	scanf("%d",&n);
	Un=Fibonacci(n);
	printf("U%d = %d",n,Un);

	return 0;
}