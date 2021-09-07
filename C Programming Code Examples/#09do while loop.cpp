#include <stdio.h>

int main(void){
	// do-while loop is a type of repetition structure in C programming. In any loop you need to fulfill following 4 conditions
	int i; // 1st condition: define control variable
	i = 1; // 2nd condition: assign initial value to control variable
	do{
		printf("%d\n", i);
		i++;  // 4th condition: increment/decrement control variable
	}while(i<=10); // 3rd condition: define loop termination condition
	
	return 0;
}

