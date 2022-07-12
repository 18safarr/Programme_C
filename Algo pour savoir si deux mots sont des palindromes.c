#include<stdio.h>
#include<string.h>
int main(void)
{
	char ch1[40];
    char ch2[40];
    int i=0;
    printf("Donner le premier mot \n");
    scanf("%s",ch1);
    printf("Donner le second mot \n");
    scanf("%s",ch2);
    if (strlen(ch1)==strlen(ch2))
    {
    	while ((i<=strlen(ch1))&&(ch1[i]==ch1[(strlen(ch1)-1)-i]))
    	{
    		i=i+1;
        }
         (i<=strlen(ch1))? printf("%s et %s ne sont pas des palindromes ",ch1,ch2) : printf("%s et %s sont des palindromes",ch1,ch2);
    }
    else
    {
    	printf("%s et %s ne sont pas des palindromes",ch1,ch2);
    }
	return 0;
}