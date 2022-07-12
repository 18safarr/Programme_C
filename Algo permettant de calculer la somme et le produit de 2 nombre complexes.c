#include<stdio.h>
typedef struct NombreComplexe
{
	int R,I;
}NC;
int main(void)
{
	NC complex[2];
	int i,SR,PR,SI,PI;
	printf("Pour le premier nombre complexe \n");
	for(i=0;i<2;i++)
	{
		printf("Donner sa partie reelle \n");
		scanf("%d",&complex[i].R);
		printf("Donner sa imaginaire sans le i \n");
		scanf("%d",&complex[i].I);
		if(i==0)
		printf("Pour le deuxieme nombre complexe \n");
    }
    SR=complex[0].R+complex[1].R;
    SI=complex[0].I+complex[1].I;
    PR=(complex[0].R*complex[1].R)-(complex[0].I*complex[1].I);
    PI=(complex[0].R*complex[1].I)+(complex[1].R*complex[0].I);
    printf("(%d,%d) + (%d,%d) = (%d,%d) \n",complex[0].R,complex[0].I,complex[1].R,complex[1].I,SR,SI);
    printf("(%d,%d) * (%d,%d) =(%d,%d) \n",complex[0].R,complex[0].I,complex[1].R,complex[1].I,PR,PI);
	return 0;
}