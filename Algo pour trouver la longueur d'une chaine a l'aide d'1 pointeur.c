#include<stdio.h>
int main(void)
{
	char ch[]="ibrahima koundia";
	int i=0;
	char *p=NULL;
	i=0;
	do 
	{
		p=&ch[i];
		i=i+1;
    } 
    while (*p!=0);
    printf("La longueur de la chaine est %d",i-1);

	return 0;
}