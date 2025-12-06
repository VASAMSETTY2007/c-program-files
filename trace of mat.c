/*Write a c program to find the Trace of a matrix*/
#include<stdio.h>
int main()
{
	int mat[3][3],i,j,sum=0;
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
            sum = sum + mat[i][i];
       }
	printf("\nThe trace of a given matrix is %d",sum);
}