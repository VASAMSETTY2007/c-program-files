/*write a c program to swapping of two numbers using call by value*/
#include<stdio.h>
void swap(int ,int );
int main ()
{
	int a,b;
	printf("\n Enter any two integer numers ");
	scanf("%d%d",&a,&b);
	printf("\n Before swapping %d%d",a,b);
	swap(a,b);
	printf("\n After swapping %d%d",a,b);
}
void swap(int x,int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}