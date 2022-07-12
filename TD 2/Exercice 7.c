#include<stdio.h>
int main(void)
{
	int a,p=0,mp=0;
	do 
	{
		printf("Donner un entier \n");
		scanf("%d",&a);
		if(a%2==0)
            p+=1;
        else
            mp+=1;
    }
    while(a!=0);
    printf(" Le nombrede nombre paire est %d et le nombre de nombre impaire est %d",p,mp);

	return 0;
}