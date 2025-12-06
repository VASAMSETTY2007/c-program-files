/*write a c program to generate the electricity bill based on the following information
 1.if units are 1 to 50,unit cost is Rs 2.50 and charge is 30.0
 2.if units are 51 to 100,unit cost is Rs 3.00 and charge is 50.0
 3.if units are 101 to 200,unit cost is Rs 3.50 and charge is 75.0
 4.if units are 201 to 300,unit cost is Rs 4.00 and charge is 100.0
 5.if units are more than 300,unit cost is Rs 5.00 and charge is 125.0*/ 
  #include<stdio.h>
  int main()
{
  int units;
  float uc,charge,total;
  printf("enter no of units consumed");
  scanf("%d",&units);
  if(units<=50)
  {
  	uc=units*2.50;
  	charge=30;
  }
  else if(units>=51 && units<=100)
  {
  	uc=units*3.00;
  	charge=50.0;
  }
  else if(units>=101 && units<=200)
  {
  	uc=units*3.50;
  	charge=75.0;
  }
  else if (units>=201 && units<=300)
  {
  	uc=units*4.00;
  	charge=100.0;
  }
  else
  { 
  uc=units*5.0;
  charge=125.0;
  }
  total=uc+charge;
  printf("the total electricity bill amount is %f",total);
}  