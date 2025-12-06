/*write a c program to find factorial of a given number using recursion*/
#include<stdio.h>
int fact(int );
int main()
{
    int n;
	printf("\nEnter any +ve integer number");
	scanf("%d",&n);
	printf("Factorial is %d",fact(n));	
}
int fact(int x)
{
	if( x==0 || x==1)
	   return 1;
	else
	   return x*fact(x-1);
}