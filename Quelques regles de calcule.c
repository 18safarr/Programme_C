#include<stdio.h>
int main(void)
{
	int i;
	float x,z,y;
	i=4.5+2; //i=6 et non 6.5 car i est declarer comme un entier
	x=i+1;
    printf("%f \n",x);
    z=2/3;  // z=0.0000 comme 2 et3 sont des entiers donc on a une division entiere
    printf("%f \n",z);
    y=5/2.0; 
    printf("%f \n",y); // y=2.5 comme l'un des des elements est un reel on a une division de reel
            //LES OPERATEURS D'INCREMENTATION
           int k,j=2;
           i=2;
           k=i + ++j;    // k=5 car le compilateur a incrementer la valeur de j avant de faire k=j+i
           printf("k=%d \n",k);
           k=i++ + ++j; // k=6 car le compilateur le compilateur a utiliser l'encienne valeur de i=2 et incrementer j=4 avan de faire k=i+j
           printf("k=%d",k); 
	return 0;
}