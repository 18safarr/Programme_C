#include<stdio.h>
void remplitA(int A[10]) 
{
	int i;
	printf("Donner les elements du tableau \n");
	for(i=0;i<10;i++)
	scanf("%d",&A[i]);
}
void impA(int A[10])
{
	int i;
	for(i=0;i<10;i++)
	printf("A[%d] = %d \n",i,A[i]);
}
void Trie(int A[10])
{
	int i,j,c;
	for(i=0;i<9;i++)
	 for(j=i+1;j<10;j++)
	  if(A[i]>A[j])
	  {
	  	c=A[i];
	  	A[i]=A[j];
	  	A[j]=c;
      }
      printf("Apres triage du tableau \n");
      impA(A);
}

int main(void)
{
	int tab[10];
	remplitA(tab);
	impA(tab);
	Trie(tab);
	

	return 0;
}