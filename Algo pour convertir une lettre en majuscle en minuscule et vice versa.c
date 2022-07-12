#include<stdio.h>
int main(void)
{
	char lettre;
	printf("Donner une lettre :");
	scanf("%c",&lettre);
	if((lettre>='a')&&(lettre<='a'+25))
        printf("\n Conversion en Majuscule : %c",lettre-32);
    else
    if((lettre>='A')&&(lettre<='A'+25))
       printf("\n Conversion en minuscule : %c",lettre+32);
    else
        printf("\n Le caractere '%c' n'est une lettre",lettre);

	return 0;
}