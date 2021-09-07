#include <stdio.h>

int mode(int arr[], int size); // function prototype

int main(void){
	// in following simple program we will create a function which will accept an array as an input
	// Furthermore that function will return mode value from the array elements
	// mode value is the most repeated value of the elements
	
	int arrayName[10] = {2,4,4,4,1,2,3,4,2,3}; // defined an array with 10 elements
	
	//output each element of array
	printf("Original values of the array\n\n");
	printf("Array index\t\t\tValue\n");
	for(int j=0; j<10; j++){
		printf("%11d\t\t\t%4d\n", j, arrayName[j]);
	}
	
	int a = mode(arrayName, 10); // function call
	
	printf("\n\nMode Value is: %d", a);
	
	return 0;
}

//function definition
int mode(int arr[], int size){
	int freq[size] = {0};
	for(int i=0; i<size; i++){
		freq[arr[i]]++;
	}
	
	printf("\nFrequency of each array element\n\n");
	printf("Array index\t\t\tValue\n");
	for(int j=0; j<10; j++){
		printf("%11d\t\t\t%4d\n", j, freq[j]);
	}
	int largest = 0;
	for (int j=0; j<size; j++){
		if(freq[j]>freq[largest]){
			largest = j;
		}
	}
	
	printf("\nFrequency of each array element (graphical representation)\n\n");
	printf("Array index\t\t\tFrequency\n");
	for(int i=0; i<size; i++){
		printf("%11d\t\t\t",i);
		for(int j=0; j<freq[i]; j++){
			printf("*");
		}
		printf("\n");
	}
	return largest;
}
