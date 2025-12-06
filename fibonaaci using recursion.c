/*write a c program to find fiboonaic series of a given number*/
// 0 1 1 2 3 5 8 13
#include<stdio.h>
int fib(int);
int main()
{
	int n,i;
	printf("Enter any +ve integer number");
	scanf("%d",&n);
	printf("Fibonnaci series is ");
	for(i=0;i<n;i++)
	printf("%d ",fib(i));
}
int fib (int x)
{
	if(x == 0 || x == 1)
	    return x;
	else
	    return fib(x-1)+fib(x-2);
}