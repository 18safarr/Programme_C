#include<stdio.h>
int main(void)
{
	int tab[7], i,max,j=0,c;
	
	printf("Donner les elements du tableau \n");
    for(i=0;i<7;i++)
    
   scanf("%d",&tab[i]);
    max=tab[0];
    
    do 
    {
    	for (i=j+1;i<7;i++)
            if(max<tab[i])
            {
            	max=tab[i];
                c=tab[i];
                tab[i]=tab[j];
                tab[j]=c;
            }
            j=j+1;
            max=tab[j];
    }
    while(j<6);
    for(i=0;i<7;i++)
        printf("[%d] ",tab[i]);
    
	return 0;
}