/*write a c program to print fibonacci series upto the given number*/
#include<stdio.h>
int main()
{
	int a=1,b=1,c,i,n;
	printf("Enter any +ve integer");
	scanf("%d",&n);
	
	printf("%d %d",a,b);
	
	for(i=2;i<n;i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("   %d",c);
	}
}