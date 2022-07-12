#include<stdio.h>
int addition ( int a,int b)
{
	return(a+b);
	
}
int main()
{int c,d,s;
	print( "donner deux nmbe  \nn");
	scanf("%d  %d",&c,&d);
s=addition(c,d);
	printf("%d ",s);
	return 0;	
	
}