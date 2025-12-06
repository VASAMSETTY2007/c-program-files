/*write a c program to print the given number is a palindrome or not*/
#include<stdio.h>
int main()
{
	int num,rev=0,rem,temp;
	printf("enter any poisitive integer number");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	if(temp==rev)
	printf("the given number is a paliondrome is %d",temp);
	else
	printf("the given number is not a palindrome is %d",temp);
}