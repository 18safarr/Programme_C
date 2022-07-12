#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char txt[199];
	int i,j,c=0;
	printf("Donner une phrase \n");
	for (i=0;i<200;i++)
	{
    scanf("%c",&txt[i]);
    if (txt[i]=='e')
    c=c+1;
    else
    if (txt[i]=='\n')
    break;
    }
    printf("La phrase a une longueur de %d et contient %d 'e' \n",i-1,c);
    
    printf("Voici la phrase : ");
    for(j=0;j<i;j++)
    printf("%c",txt[j]);
    
    printf("Voici la phrase inverser : ");
    for (j=1;j<=i;j++)
    printf("%c",txt[i-j]);
    
	return 0;
}