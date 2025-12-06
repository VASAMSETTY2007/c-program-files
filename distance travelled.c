/*write a c program to evaluate the following expression:a/b*c-b+a*d/3*/
#include<stdio.h>
int main()
{
  int res,a,b,c,d;
  printf("enter the value of a,b,c,d");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  
  res=a/b*c-b+a*d/3;
  printf("\nthe result is %d",res);	
}