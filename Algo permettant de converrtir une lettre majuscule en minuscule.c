#include<stdio.h>
int main(void)
{
	char lettre;
	printf("Entrer une lettre Majuscule : ");
	scanf("%c",&lettre);
	if((lettre>='A')&&(lettre<='A'+25))
        printf("\n ---> Conversion en Minuscule : %c",lettre+32);
    else
        if((lettre>='a')&&(lettre<='a'+25))
            printf("Le caratere '%c' n'est pas une lettre Majuscule",lettre);

	return 0;
}