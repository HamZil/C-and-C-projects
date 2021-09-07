#include <stdio.h>
void constPtr(int * const ptr);
void ptrToConst(const int * ptr);
void test(int *a);
int main(void){
	int count = 5;
	
	constPtr(&count);
	ptrToConst(&count);
	
	return 0;
}

void constPtr(int * const ptr){
	int j= 10;
	
	//ptr = &j; // will generate an error because we cannot assign new address to constant pointenr
	
	*ptr = *ptr * 2;
	
	printf("%d\n", *ptr);
}

void ptrToConst(const int * ptr){
		int i = 12;
		
		ptr = &i;
		
		//*ptr = *ptr * 2; // will generate an error
		
		printf("%d\n", *ptr);
		
		//test(ptr);
}

void test(int *a){
	
}
