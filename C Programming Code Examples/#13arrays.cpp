#include <stdio.h>

int main(void){
	// array is a type of variable which can store multiple items of the same data type
	// in following simple program we will define an array of 10 elements
	//After that we will multiply each element of array with 5 and then we will output the value of each element of the array
	
	int arrayName[10] = {2,5,3,6,9,34,23,84,56,44}; // defined an array with 10 elements
	
	//output each element of array
	printf("Original values of the array\n\n");
	printf("Array index\t\t\tValue\n");
	for(int j=0; j<10; j++){
		printf("%11d\t\t\t%4d\n", j, arrayName[j]);
	}
	
	//multiplied each element of array with 5
	for(int i=0; i<10; i++){
		arrayName[i] = arrayName[i] * 5;
	}
	
	//output each element of array
	printf("\n\nValues of the array after multiplication\n\n");
	printf("Array index\t\t\tValue\n");
	for(int j=0; j<10; j++){
		printf("%11d\t\t\t%4d\n", j, arrayName[j]);
	}
	
	return 0;
}

