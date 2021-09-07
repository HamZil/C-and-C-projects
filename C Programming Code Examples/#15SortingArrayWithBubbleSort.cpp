#include <stdio.h>

void bubbleSort(int arr[], int size); // function prototype

int main(void){
	// in following simple program we will create a function which will accept an array as an input
	// Furthermore that function will sort the elements of the array in ascending order
	
	int arrayName[10] = {90,44,33,83,49,34,51,84,56,44}; // defined an array with 10 elements
	
	//output each element of array
	printf("Original values of the array\n\n");
	printf("Array index\t\t\tValue\n");
	for(int j=0; j<10; j++){
		printf("%11d\t\t\t%4d\n", j, arrayName[j]);
	}
	
	bubbleSort(arrayName, 10); // function call
	
	//output each element of array
	printf("\n\nValues of the array after passing to the bubbleSort function\n\n");
	printf("Array index\t\t\tValue\n");
	for(int j=0; j<10; j++){
		printf("%11d\t\t\t%4d\n", j, arrayName[j]);
	}
	
	return 0;
}

//function definition
void bubbleSort(int arr[], int size){
	//BubbleSort algorithm will sort the array elements in ascending order. Outer loop is for passes and inner loop will do comparisons
	for(int l=1; l<=size; l++){
		for(int m=0; m<size-1; m++){
			if(arr[m]>arr[m+1]){
				int temp;
				temp = arr[m];
				arr[m] = arr[m+1];
				arr[m+1] = temp;
			}
		}
	}
}
