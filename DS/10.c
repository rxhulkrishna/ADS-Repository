#include<stdio.h>
void main()
{
	int A[]={1,2,3,4},B[]={5,6,7,8};
 	int temp[4];
 	
 	printf("\nElements of 1st Array before swapping : ");
 	for(int i=0;i<4;i++)
	 {
 	 	printf("\t%d",A[i]);
 	}
 	printf("\nElements of 2nd Array before swapping : ");
 	for(int i=0;i<4;i++)
 	{
  		printf("\t%d",B[i]);
 	}

 	for(int i=0;i<4;i++)
 	{
  		temp[i]=A[i];
  		A[i]=B[i];
  		B[i]=temp[i];
	}
 	printf("\nElements of 1st Array after swapping: ");
 	for(int i=0;i<4;i++)
	 {
 	 	printf("\t%d",A[i]);
 	}
 	printf("\nElements of 2nd Array after swapping : ");
 	for(int i=0;i<4;i++)
 	{
  		printf("\t%d",B[i]);
 	}
}
