#include <stdio.h>
#include<string.h>
int main(void)
{
	char ch[256];
	char  chaine[]="mam";
	
	printf("Donner une chaine de caracteres \n");
	scanf("%s",ch);
	if(strstr(ch,chaine)!=0)
	printf("Le caractere se trouve dans la chaine ");
	

	return 0;
}