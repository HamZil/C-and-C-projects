#include <stdio.h>

int sum(int x, int y); // this is prototype of our sum function. 

int main(void){
	// for simplicity we divide our code into small pieces / modules known as functions
	// to use functions in C programming we need to define function prototype, function definition
	// and finally we call the function to perform certain functionality
	// here we will defin a simple sum function, which will accept 2 numbers as input and will return their sum
	
	int number1, number2;
	int a;
	
	printf("Please Enter First Number\n");
	scanf("%d", &number1);
	
	printf("Please Enter Second Number\n");
	scanf("%d", &number2);
	
	// here we called our sum function with 2 input numbers entered by user 
	//Now this function will return the sum of these numbers which is assigned to variable a
	a = sum( number1 , number2); 
	
	printf("Sum = %d", a);
	
	return 0;
}

// following is the definition of our sum function
int sum(int x, int y){
	int s;
	s = x + y;
	return s;
}

