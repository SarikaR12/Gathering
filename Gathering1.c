#include<stdio.h>
int factorial(int number)
{
  int fact;
  if(number<=1)
  {
  	return 1;
  }
  else
  {
  	fact = number*factorial (number-1);
  	return fact;
  }
}
void main()
{
	int number;
	printf("Enter Number = ");
	scanf("%d",&number);
	printf("factorial = %d",factorial (number));
}
