#include <stdio.h>

int main(void){
	// defining variables, computing their sum and printing sum on the screen
	
	int number1; //defined variable named as number1 with data type integer
	int number2; // defined variable named as number2 with data type integer
	int sum; // defined variable named as sum with data type integer
	
	number1 = 5; // assigned value to variable named as number1
	number2 = 20; // assigned value to variable named as number2
	sum = number1 + number2; // assigned value to variable named as sum
	
	printf("Sum = %d", sum); // printing the value stored in variable named as sum. %d will hold the value of variable named as sum. 
	//Furthermore %d tells the compiler that the value of variable sum should be of the data type decimal integer
	
	return 0;
}

