#include <stdio.h>
int main(void)
{
	int i,j;
	for (i=1;i<=10;i++)
	{
		for (j=1;j<=10;j++)
		{
			printf("%d X %d = %d  |  ",i,j,i*j );
			printf( "%d X %d = %d \n",i+1,j+1,(j+1)*(i+1));
        }
        i+=1;
    }

	return  0;
}