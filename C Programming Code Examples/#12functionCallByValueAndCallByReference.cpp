#include <stdio.h>

void swapCallByValue(int x1, int y1); // this is prototype of our function (call by value) 
void swapCallByReference(int *x1, int *y1); // this is prototype of our function (call by reference)

int main(void){
	// in call by value the original variables are not affected because the values are copied inside functions
	// in call by reference the original variables are affected becuase we pass the memory address inside functions
	
	int number1, number2;
	
	printf("Please Enter First Number\n");
	scanf("%d", &number1);
	
	printf("Please Enter Second Number\n");
	scanf("%d", &number2); 
	
	printf("Following is the result of Call By Value. You will notice that values of original variables \n are not affected when passed to the swapCallByValue function\n");
	
	printf("number1 variable's value before passing in swapCallByValue function: %d\n", number1);
	printf("number2 variable's value before passing in swapCallByValue function: %d\n", number2);
	
	// function call (call by value)
	swapCallByValue( number1 , number2);
	
	printf("number1 variable's value after passing in swapCallByValue function: %d\n", number1);
	printf("number2 variable's value after passing in swapCallByValue function: %d\n", number2);
	
	printf("Following is the result of Call By Reference. You will notice that values of original variables \n are affected when passed to the swapCallByReference function\n");
	
	printf("number1 variable's value before passing in swapCallByValue function: %d\n", number1);
	printf("number2 variable's value before passing in swapCallByValue function: %d\n", number2);
	
	// function call (call by reference)
	swapCallByReference( &number1 , &number2);
	
	printf("number1 variable's value after passing in sumCallByValue function: %d\n", number1);
	printf("number2 variable's value after passing in sumCallByValue function: %d\n", number2);
	
	
	return 0;
}

// following is the definition of our sumCallByValue function (call by value)
void swapCallByValue(int x1, int y1){
	int temp;
	temp = x1;
	x1 = y1;
	y1 = temp;
}

// following is the definition of our sumCallByReference function (call by reference)
void swapCallByReference(int *x2, int *y2){
	int temp;
	temp = *x2;
	*x2 = *y2;
	*y2 = temp;
}

