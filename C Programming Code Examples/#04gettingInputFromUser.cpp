#include <stdio.h>

int main(void){
	// defining variables, computing their sum and printing sum on the screen
	
	int number1; //defined variable named as number1 with data type integer
	int number2; // defined variable named as number2 with data type integer
	int sum; // defined variable named as sum with data type integer
	
	printf("Please Enter First Integer Number:\n");
	scanf("%d", &number1); // getting value from user and assiging entered value to variable named as number1. %d defines that the value to be entered should be an integer
	printf("\n");
	printf("Please Enter Second Integer Number:\n");
	scanf("%d", &number2); // getting variable value from user and assiging value to variable named as number2.  %d defines that the value to be entered should be an integer
	sum = number1 + number2; // summing two numbers and assigning result to variable named as sum
	
	printf("Sum = %d", sum); // printing the value stored in variable named as sum. %d will hold the value of variable named as sum. Further %d says that I'll hold the value of data type decimal integer
	
	return 0;
}

