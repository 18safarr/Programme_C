#include<stdio.h>
int main(void)
{
	int i,j,cc,etape,c;
	int tab[5]={8,3,9,6,9},n;
	
	for(i=0;i<5;i++)
	printf("tab[%d] = %d \n",i,tab[i]);
	
	i=0;
	cc=0;
	printf("Donner l'element a supprimer dans le tabeau \n");
	scanf("%d",&n);
	do 
	{
		etape=0;
		while( (n!=tab[i])&&(i<5-cc) )
		i+=1;
		
		if(i<5-cc)
		{
			
           
			etape=1;
			for(j=i;j<5-1-cc;j++)
			{
				c=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=c;
            }
            cc+=1;
            i=0;
        }
        
    }while(etape!=0);
    for(i=0;i<5-cc;i++)
    {
    	printf("tab[%d]=%d \n",i,tab[i]);
    }
	return 0;
}