#include<stdio.h>
int main(void)
{
	int n,i,c=0;
	do
	{
	printf("Donner un entier positif non null \n");
	scanf("%d",&n);
	}
	while(n<=0);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
            c+=1;
    }
    if(c==2)
        printf("%d est nombre premier \n",n);
    else
        printf("%d n'est pas un nombre premier \n",n);
	return 0;
}