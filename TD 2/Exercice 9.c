#include<stdio.h>
int main(void)
{
	int i,n,j,sd=0;
	do
	{
        printf("Donner un entier positif \n");
        scanf("%d",&n);
    }
    while(n<0); 
	for(j=1;j<=n;j++)
	{
        for(i=1,sd=0;i<j;i++)
        {
            if(j%i==0)
                sd+=i;
        }
         if (sd==j)
            printf("%d est un nombre parfait \n",j);
    }
	return 0;
}