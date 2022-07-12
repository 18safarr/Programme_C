#include<stdio.h>
#include<string.h>
int main(void)
{
	char ch1[40];
    int i=0;
    printf("Donner un mot \n");
    scanf("%s",ch1);
    
    	while ((i<=(strlen(ch1)/2))&&(ch1[i]==ch1[(strlen(ch1)-1)-i]))
    	{
    		i=i+1;
        }
         (i<=(strlen(ch1)/2))? printf("%s n'est pas un palindrome ",ch1) : printf("%s  est un palindrome",ch1);
  

 
	return 0;
}