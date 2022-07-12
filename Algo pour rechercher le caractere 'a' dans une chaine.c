#include <stdio.h>
#include<string.h>
int main(void)
{
	char ch[256];
	int i;
	printf("Donner une chaine de caracteres \n");
	scanf("%s",ch);
	
	while ((i<=strlen(ch))&&(ch[i]!='a'))
	{
		i=i+1;
    }
    (i==(strlen(ch)+1))? printf("%s ne contient pas le caractere 'a' ",ch) : printf("%s contient ' a ' ",ch);
	

	return 0;
}