#include<stdio.h>
int main(void)
{
	float moyenne;
	printf("Donner la moyenne de l'eleves \n");
	scanf("%f",&moyenne);
	if ((moyenne>=10)&&(moyenne<12))
        printf("Vous avez une mention PASSABLE \n");
    else
        if ((moyenne>=12)&&(moyenne<14))
            printf("Vous avez une mention Assez Bien");
       else
            if((moyenne>=14)&&(moyenne<16))
                printf("Vous avez une mention BIEN");
           else
                if((moyenne>=16)&&(moyenne<=20))
                    printf("Vous avez une mention TRES BIEN");
    return 0;
}