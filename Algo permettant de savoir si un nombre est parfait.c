#include<stdio.h>
int main(void)
{
	int i,n,sd=0;
	printf("Donner un entier \n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
            sd+=i;
    }
    if (sd==n)
        printf("%d est un nombre parfait ",n);
    else
        printf("%d n'est pas un nombre parfait",n);
	return 0;
}