/*Write a c program to perform multiplication of two matrices*/
#include<stdio.h>
int main()
{
	int a[2][2],b[2][3],c[2][3],i,j,k;
	
	printf("Enter the elements of matrix A");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements of matrix B");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the result of matrix C");
	for(i=0;i<2;i++);
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}