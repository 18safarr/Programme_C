#include<stdio.h>
int main(void )
{
	int N,n=0,p=0,i;
	do 
	{
		printf("Donner la taille du tableau \n");
		scanf("%d",&N);
    }
    while((N<=0)||(N>50));
    int T[N];
    printf("Donner les elements du tableau\n");
    for(i=0;i<N;i++)
    {
    scanf("%d",&T[i]);
    if(T[i]>=0)
    p+=1;
    else
    n+=1;
    }
    int TPOS[p],TNEG[n];
    TPOS[3]=5;
    n=0;  p=0;
    for(i=0;i<N;i++)
    {
    	if(T[i]>=0)
    	{
    		TPOS[p]=T[i];
    		p+=1;
        }
        else
        {
        	TNEG[n]=T[i];
        	n+=1;
        }
    }
    printf("Le grand tableau \n");
    for(i=0;i<N;i++)
    printf("T[%d] = %d \n",i+1,T[i]);
    printf("Tableau des elements positifs %d \n",p);
   for(i=0;i<p;i++)
    printf("TPOS[%d] = %d \n ",i+1,TPOS[i]);
    printf("Tableau des elements negatifs %d\n",n);
    for(i=0;i<n;i++)
    printf("TNEG[%d] = %d \n",i+1,TNEG[i]);

	return 0;
}