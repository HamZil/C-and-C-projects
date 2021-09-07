#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a;
	int i=1;
	int c;
 printf("Enter no :");
 scanf("%d",&a);
 

  
while(i<=10){
	c=a*i;
	
	printf("%dx%d=%d\n",a,i,c);
	i++;
}

	return 0;
}
