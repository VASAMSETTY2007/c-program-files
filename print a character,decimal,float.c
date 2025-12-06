#include<stdio.h>
int main()
{
	char ch;
	int num;
	float m;
	
	printf("enter any character");
	scanf(" %c",&ch);
	
	printf("enter any integer value");
	scanf(" %d",&num);
	
	printf("enter any decimal vaue");
	scanf(" %f",&m);
	
	printf("character is %c\ninteger is %d\nfloat is %f\n",ch,num,m);
	return 0;
}