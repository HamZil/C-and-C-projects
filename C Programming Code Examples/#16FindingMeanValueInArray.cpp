#include <stdio.h>

int mean(int arr[], int size); // function prototype

int main(void){
	// in following simple program we will create a function which will accept an array as an input
	// Furthermore that function will return mean value from the array elements
	// mean value is claculated by summing all values of the array and dividing by the total number of elements of the array
	
	int arrayName[10] = {90,44,33,83,49,34,51,84,56,44}; // defined an array with 10 elements
	
	//output each element of array
	printf("Original values of the array\n\n");
	printf("Array index\t\t\tValue\n");
	for(int j=0; j<10; j++){
		printf("%11d\t\t\t%4d\n", j, arrayName[j]);
	}
	
	int a = mean(arrayName, 10); // function call
	
	printf("\n\nMean Value is: %d (excluding fractional part)", a);
	
	return 0;
}

//function definition
int mean(int arr[], int size){
	int sum = 0;
	for(int i=0; i<size; i++){
		sum = sum + arr[i];
	}
	return sum/size;
}
