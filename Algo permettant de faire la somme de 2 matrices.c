#include<stdio.h>
int main(void)
{
 int matA[3][4],matB[3][4],i,j,matC[3][4];
 printf("Pour la matrice A \n");
 for(i=0;i<3;i++)
 {
  printf("\nDonner les elements de ligne %d\n",i+1);
   for(j=0;j<4;j++)
    scanf("%d",&matA[i][j]);
 }

 printf("Pour la matrice B \n");
 for(i=0;i<3;i++)
 {
  printf("\nDonner les elements de ligne %d\n",i+1);
   for(j=0;j<4;j++)
    scanf("%d",&matB[i][j]);
 }
 for(i=0;i<3;i++)
  for(j=0;j<4;j++)
   {
	matC[i][j]=matA[i][j]+matB[i][j];
   }
 printf("\n La matrice somme est :\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<4;j++)
    {
      printf("%d \t",matC[i][j]);
    }
   printf("\n");
  }
return 0;
}
