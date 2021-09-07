#include <stdio.h>
 
void modifyArray(int arr[], int size); // function prototype
 
int main(void){
 
   int arrayName[10] = {2,5,3,6,9,34,23,84,56,44}; // defined an array with 10 elements
 
   //output each element of array
   printf("Original values of the array\n\n");
   printf("Array index\t\t\tValue\n");
   for(int j=0; j<10; j++){
      printf("%11d\t\t\t%4d\n", j, arrayName[j]);
   }
 
   modifyArray(arrayName, 10); // function call
 
   //output each element of array
   printf("\n\nValues of the array after passing to the function\n\n");
   printf("Array index\t\t\tValue\n");
   for(int j=0; j<10; j++){
      printf("%11d\t\t\t%4d\n", j, arrayName[j]);
   }
 
   return 0;
}
 
//function definition
void modifyArray(int arr[], int size){
   //multiplied each element of array with 20
   for(int i=0; i<size; i++){
      arr[i] = arr[i] * 20;
   }
}
