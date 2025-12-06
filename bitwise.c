/*write a c program to perform bitwise operations*/
#include<stdio.h>
int main()
{
	
	int a,b;
	printf("enter any two integers");
	scanf("%d%d",&a,&b);
	
	printf("\nbitwise operation of %d & %d = %d",a,b,a&b);
	printf("\nbitwise operation of %d | %d = %d",a,b,a|b);
	printf("\nbitwise operation of %d ^ %d = %d",a,b,a^b);
	printf("\nbitwise operation of %d << %d = %d",a,b,a<<b);
	printf("\nbitwise operation of %d >> %d = %d",a,b,a>>b);
}