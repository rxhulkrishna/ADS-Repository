#include<stdio.h>
void main()
{
	int A[]={1,3,5,7} , B[]={2,4,6,8} , M[8];
  	int a= 0,b= 0;
 	printf("\n Array elments of A : ");
 	for(int i = 0; i < 4; i++)
 	{
 		printf("\t %d",A[i]);
 	}
 	printf("\n Array elements of B : ");
 	for(int i = 0; i < 4; i++)
 	{
 		printf("\t %d",B[i]);
 	}
 	for(int i=0; i < 8; i++)
	{
 		if(i % 2 == 0)
 		{
			M[i]=A[a];
			a++;
		}
		else if(i % 2 != 0)
		{
			M[i]=B[b];
			b++;
		}
	}
	printf("\n MERGED ARRAY: ");
 	for(int i = 0; i < 8; i++)
 	{
 		printf("\t %d",M[i]);
 	}
}
