#include <stdio.h>
int main(void)
{
	int tab[5]={12,45,30,20,2};
	int a,i=0;
	/* for (i=0;i<4;i++)
	 scanf("%d",&tab[i]);
	 tab[4]=0;
	 */
	 do 
	 {
	 	a=tab[4-i];
	 	tab[4-i]=tab[3-i];
	 	tab[3-i]=a;
	 	i=i+1;
     } 
     while(i<=3);
     for (i=0;i<5;i++)
     printf("tab[%d]=[%d] \n",i,tab[i]);
	return 0;
}