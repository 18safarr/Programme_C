#include <stdio.h>
int main(void)
{
	int a,b;
	 unsigned char o;
	 printf("Donner a \n");
	 scanf("%d",&a); 
	 printf("Quelle operation voulez vous faire + ou  - ou  / ou  * \n");
	 scanf("%s",&o);
	 printf("Donner b \n");
	 scanf("%d",&b);
	 switch (o)
	 {
        case '+' : printf("La somme de %d  + %d =%d \n",a,b,a+b);
        	break;
        case '-' : printf("La soustraction de %d - %d = %d \n",a,b,a-b);
            break;
        case '*' : printf("La multiplication de %d * %d = %d",a,b,a*b);
        	break;
        case '/' : 
            (b!=0) ? printf("La division  de %d / %d = %d \n",a,b,a/b) : printf("La division est impossible");
            break;
        default :
            printf("Operateur incorrecte \n");
           break;
     
     }
 
return 0;
}