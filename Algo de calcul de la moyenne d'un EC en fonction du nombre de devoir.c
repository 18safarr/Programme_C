#include <stdio.h>
int main(void)
{
	float dv1,dv2,examen,moyenne=0;
	int n;
	  do 
	  {
	  	printf("Donner le nombre de devoir que vous avez fait \n");
	  	scanf("%d",&n);
      }
      while ((n<=0)  || (n>2));
      if (n==1)
      {
      	printf("Donner la note du devoir \n");
      	scanf("%f",&dv1);
      	printf("Donner la note de l'examen \n");
      	scanf("%f",&examen);
      	if ((dv1<=20) && (examen<=20))
      	{
      	moyenne = (0.6*examen) + (0.4*dv1);
      	printf("La moyenne de cette EC est %.2f ",moyenne);
      	}
      	else
      	{
      		printf ("Verifier les notes quue vous avez saisie \n");
        }
      }
      else
      {
      	printf("Donner la note du premier devoir \n");
      	scanf("%f",&dv1);
      	printf("Donner la note du second devoir \n");
      	scanf("%f",&dv2);
      	printf("Donner la note de l'examen \n");
      	scanf("%f",&examen);
      	if ((moyenne<=20)&&(dv1<=20)&&(dv2<=20))
      	{
      		moyenne=(dv1+dv2)*0.6+examen*0.4;
      		printf("lLa moyenne de cette EC est %.2f .",moyenne);
        }
        else
        {
        	printf("Verifier les notes que vous avez saisie");
        }
      }
	

	return 0;
}