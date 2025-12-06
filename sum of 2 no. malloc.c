/*write a c program to perform sum of the numbers using malloc()*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,sum=0;
	printf("\n Enter number of elements");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	printf("\n Enter elements of an array: ");
	for(i=0;i<n;++i)
	  scanf("%d",ptr+i);
	
	for(i=0;i<n;++i)
	sum = sum + *(ptr+i);
	
	printf("sum is %d",sum);
}