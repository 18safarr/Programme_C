#include<stdio.h>
#include<string.h>
int main(void)
{
	char ch[20];
	int i=0;
	printf("Donner une chaine de caractere \n");
	scanf("%s",ch);
	char ch1[strlen(ch)];
	strcpy(ch1,ch);
	for(i=0;i<strlen(ch);i++)
	{
		if ((ch[i]>='a')&&(ch[i]<='a'+25))
		ch[i]=ch[i]-32;
    }
    printf("conversion  en MAJUSCULE de %s ===> %s \n",ch1,ch);
	return 0;
}