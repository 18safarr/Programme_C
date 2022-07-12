#include<stdio.h>
int main(void)
{
	int i;

	char alp='A';
    printf("Les lettre de l'alphabet \n");
    for(i=0;i<26;i++)
    {
    	printf("%c ",alp+i);
    }
	return 0;
}