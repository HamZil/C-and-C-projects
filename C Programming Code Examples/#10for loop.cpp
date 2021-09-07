#include <stdio.h>

int main(void){
	// for loop is a type of repetition structure in C programming. In any loop you need to fulfill following 4 conditions
	
	for(int i=1; i<=10; i++){ // here in one line we defined control variable i (condition 1),
		//assigned initial value to control variable i (condition 2), defined loop termination condition (condition 3)
	  	//and incremented the control variable (condition 4)
	  	
	  	printf("%d\n", i);
		
	}
	
	return 0;
}

