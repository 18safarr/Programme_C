#include<stdio.h>
int main(void)
{
	int tab[7], i,ii=0,max,j=0,c,etape=0;
    for(i=0;i<7;i++)
    scanf("%d",&tab[i]);
    max=tab[0];
    do 
    {
    	for (i=j+1;i<7;i++)
            if(max<tab[i])
            {
                 max=tab[i];
                 ii=i;
                 etape=1;
            }
            if(etape==1)
            {
            tab[ii]=tab[j];
            c=max;
            max=tab[j];
            tab[j]=c;
             }     
            j=j+1;
            max=tab[j];
            etape=0;
            
            
    }
    while(j<6);
    for(i=0;i<7;i++)
        printf("[%d] ",tab[i]);
    
	return 0;
}