#include<stdio.h>
#define N 5
int main(void)
{
	int tab[N]={3,6,9,2,7},n,i=0;
	printf("Donner l'element que vous voulez rechercher dans le tableau \n");
	scanf("%d",&n);
	while((tab[i]!=n)&&(i<N))
        i=i+1;
	if (i==N)
	printf("%d ne se trouve dansle tableau ",n);
	else
	printf("%d se trouve dans le tableau ",n);

	return 0;
}