/*write a c program whether the given number is armstrong or not*/
#include<stdio.h>
#include<math.h>
int main()
{
	int num,rem,sum=0,temp,original,len=0;
	printf("enter any positive integer");
	scanf("%d",&num);
	original=num;
	temp=num;
	
	while(num!=0)
	{
		rem = num % 10;
		len++;
		num = num /10;
	}
	while(temp!=0)
	{
		rem = num % 10;
		sum = sum + pow(rem,len);
		temp = temp /10;
	}
	if(sum=original)
	printf("the given number is armstrong %d",original);
	else
	printf("the given number is not armstrong %d",original);
}