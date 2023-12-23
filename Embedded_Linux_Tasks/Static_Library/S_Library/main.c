#include <stdio.h>
#include <stdlib.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "modulus.h"
int main()
{
	float num1 =2.5;
	float num2 =4.5;
	float result =0.0;
	int num3 =2;
	int num4 =4;
	
	result = addition(num1 , num2);
	printf("The Addition of %f and %f is equal %f \n",num1,num2,result);
	
	

	result = subtraction(num1 , num2);
	printf("The subtraction of %f and %f is equal %f \n",num1,num2,result);

	
	
	result = multiplication(num1 , num2);
	printf("The multiplication of %f and %f is equal %f \n",num1,num2,result);

	
	
	result = division (num1 , num2);
	printf("The division of %f and %f is equal %f \n",num1,num2,result);

	
	
	result = modulus(num3 , num4);
	printf("The modulus of %d and %d is equal %d \n",num3,num4,(int)result);

	

	return 0;
}
