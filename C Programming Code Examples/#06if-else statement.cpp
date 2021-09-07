#include <stdio.h>

int main(void){
	// defining variables, computing their sum and printing sum on the screen
	
	int number1; //defined variable named as number1
	int number2; // defined variable named as number2
	
	printf("Please Enter First Integer Number:\n");
	scanf("%d", &number1); // getting variable value from user and assiging value to variable named as number1
	printf("\n");
	printf("Please Enter Second Integer Number:\n");
	scanf("%d", &number2); // getting variable value from user and assiging value to variable named as number2
	
	if(number1 == number2){
		printf("%d is equals to %d\n", number1, number2); // first %d will hold the value of the variable mentioned after firs comma i.e number1. 
		//second %d will hold the value of the variable mentioned after second comma i.e number2
		
	}else{
		printf("%d is not equals to %d\n", number1, number2); // this statement will always run when number1 is not equals to number2
		
		if(number1 > number2){ // this condition will be true if number1 is greater than number2
			printf("%d is greater than %d\n", number1, number2);
			
		}else if(number1 < number2){ // this condition will be true if number1 is lesser than number2
			printf("%d is less than %d\n", number1, number2);
		}

	}	
	
	return 0;
}

