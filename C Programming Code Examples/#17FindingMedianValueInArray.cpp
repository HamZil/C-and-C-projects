#include <stdio.h>

int median(int arr[], int size); // function prototype
void bubbleSort(int arr[], int size); // function prototype

int main(void){
	// in following simple program we will create a function which will accept an array as an input
	// Furthermore that function will return median value from the array elements
	// median value is centered value of the sorted elements
	
	int arrayName[10] = {90,44,33,83,49,34,51,84,56,44}; // defined an array with 10 elements
	
	//output each element of array
	printf("Original values of the array\n\n");
	printf("Array index\t\t\tValue\n");
	for(int j=0; j<10; j++){
		printf("%11d\t\t\t%4d\n", j, arrayName[j]);
	}
	
	int a = median(arrayName, 10); // function call
	
	printf("\n\nMedian Value is: %d", a);
	
	return 0;
}

//function definition
int median(int arr[], int size){
	bubbleSort(arr, size);
	int middle = size/2;
	return arr[middle-1];
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
