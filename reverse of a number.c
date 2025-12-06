/*write a c program to print the reverse of given element*/
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter the elements");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("reverse of element");
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}