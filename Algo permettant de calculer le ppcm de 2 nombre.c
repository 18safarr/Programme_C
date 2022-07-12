#include<stdio.h>
int main(void)
{
	int a,b,A,B,c,pgcd,ppcm,reste;
	printf("Donner l'entier a \n");
	scanf("%d",&a);
	printf("Donner l'entier b \n");
	scanf("%d",&b);
	A=a; B=b;
	if (b>a)
	{
		c=a;
		a=b;
		b=c;
    }
    do 
    {
    	if (a>b)
    		reste=a%b;
    		
        if(reste!=0)
        {
        a=b;
        b=reste;
        }
    }while(reste!=0);
    pgcd=b;
    ppcm=(A*B)/pgcd;
    printf("ppcm(%d , %d)= %d ",A,B,ppcm);
	return 0;
}