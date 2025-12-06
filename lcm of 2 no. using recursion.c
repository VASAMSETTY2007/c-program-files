/*write a c program to find the lcm of given two numbers*/
#include<stdio.h>
int lcm(int,int);
int main()
{
	int n1,n2,result;
	printf("\nEnter any two +ve integer numbers");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	   result = lcm(n2,n1);
	else
	   result = lcm(n1,n2);
	   printf("\n LCM is %d",result);
}
int lcm(int a,int b)
{
	static int temp;
	   temp = temp + b;
	if(temp%a==0 && temp %b==0)
	    return temp;
	else
	    return lcm(a,b);
}