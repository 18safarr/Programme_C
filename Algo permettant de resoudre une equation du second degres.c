#include <stdio.h>
int main(void)
{ 
	int a,b,c,delta,x1,x2;
	printf("Donner a \n");
	scanf("%d",&a);
	if (a == 0)
	     {
	   
	   	    printf("Ce n'est pas une equation du second degres \n");
          }
    else
       {
	printf("Donner  b \n");
	scanf("%d",&b);
	printf("Donner c \n");
	scanf("%d",&c);
	    delta=b*b -(4*a*c);
	    if (delta<0)
	      {
	      	printf("l'equation n'admet pas de solution dans R \n");
             } 
        else
           {
           if (delta==0)
            {
              printf("la solution double de l'equation est X0 =%d. \n",-b/(2*a));
            }
           
            else
            {
            x1=(-b-sqrt(delta))/2*a;
            x2=(-b+sqrt(delta))/2*a;
            printf("les solutions sont x1=%d et x2=%d . \n",x1,x2);
            }
        }
    }
	return 0;
}
