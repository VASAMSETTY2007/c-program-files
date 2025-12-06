/*write a c program to find the average of five subjects marks*/
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float avg;
	printf("enter five subjects marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	
	avg=m1+m2+m3+m4+m5/5.0;
	printf("\nThe average is %f",avg);
}