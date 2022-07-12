#include<stdio.h>
#include<string.h>
char *rechercher_char(char *s, char c)
{
	char *p;
	p=s;
	int i=0;
	while((s[i]!=c)&&(i<strlen(s)))
	  i=i+1;
    if (i==strlen(s))
    {
    	return NULL;
    }
    else
    {
    	*p=s[i];
    	return p;
    }
	
}

int main(void)
{
	char ch[20],c;
	char *po;
   printf("Donner le caractere a pointer dans la chaine \n");
   scanf("%c",&c);
    printf("Donner une chaine de caractere \n");
    scanf("%s",ch);
   po=rechercher_char(ch,c);
    if(po==NULL)
    printf("Le caractere %c ne se trouve pas dans la chaine %s\n",c,ch);
   else
    printf("Le caractere %c se trouve dans la chaine %s \n",c,ch);
	return 0;
}