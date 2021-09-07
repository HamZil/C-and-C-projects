#include <stdio.h>

int main(void){
	int number1; //defined variable named as number1
	
	printf("Please Enter Integer Number:\n");
	scanf("%d", &number1); // getting variable value from user and assiging value to variable named as number1
	printf("\n");
	
	switch(number1){ // expression to check is written in parenthesis 
		case 10: // it's similar to say if (number1 == 10)
			{
				printf("your entered number is 10\n");
				break; // break statement is used to terminate the switch statement
			}
		case 20: // it's similar to say if (number1 == 20)
			{
				printf("your entered number is 20\n");
				break; // break statement is used to terminate the switch statement
			}
		case 30: // it's similar to say if (number1 == 30)
			{
				printf("your entered number is 30\n");
				break; // break statement is used to terminate the switch statement
			}
		default: // the default case will run when none of the above case is true
			{
				printf("you entered number other than 10,20, or 30");
				break; // break statement is used to terminate the switch statement
			}
	}
	
	return 0;
}

