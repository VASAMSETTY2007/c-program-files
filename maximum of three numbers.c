/*write a c program to find maximum of three numbers using conditional operator*/
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter any three integer numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	max=a>b?(a>c?a:c):(b>c?b:c);
	
	printf("maximum of three numbers %d %d %d is %d",a,b,c,max);
}