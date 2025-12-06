/* Write a c program to print transpose of a given matrix
1 2 3 
4 5 6
7 8 9
*/
#include<stdio.h>
int main()
{
	int mat[3][3],tmat[3][3],i,j;
	printf("\nEnter the elements of the matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   tmat[j][i] = mat[i][j];
	    }
	}
	printf("\n the transposition of the given matrix is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",tmat[i][j]);
	    }
		printf("\n");
	}
}