#include <stdio.h>
int main(void) {
		int a;
	printf("what is number:_");
	scanf("%d",&a);
	switch(a){
		
		case 1:
			printf("your write number correct 1");
			break;
		case 2:
			printf("your write number correct 2");
			break;
		case 3:
			printf("your write number correct 3");
			break;
		case 4:
			printf("your write number correct 4");
			break;
		default:
			printf("sorry you are wrong ... type b//w 1 to 4");
			break;
	}
	return 0;
}
