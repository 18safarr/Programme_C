#include <stdio.h>
int main(void)
{
	int tab[6]={12,45,30,20,2,9};
	int a,p,i=0;
	/* for (i=0;i<4;i++)
	 scanf("%d",&tab[i]);
	 tab[4]=0;
	 */
	 printf("Donner la position \n");
	 scanf("%d",&p);
	 do 
	 {
	 	a=tab[5-i];
	 	tab[5-i]=tab[4-i];
	 	tab[4-i]=a;
	 	i=i+1;
     } 
     while(i<=4-p+1);
     for (i=0;i<6;i++)
     printf("tab[%d]=[%d] \n",i,tab[i]);
	return 0;
}