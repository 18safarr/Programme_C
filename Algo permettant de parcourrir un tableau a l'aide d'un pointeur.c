#include<stdio.h>
int main(void)
{
	int tab[5]={1,5,7,2,9},*p=NULL;
	
   for(p=tab;p<tab+5;p++)
    	printf("tab = %d\n",*p);
    
	return 0;
}