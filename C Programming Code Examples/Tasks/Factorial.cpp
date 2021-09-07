#include<stdio.h>
int fact(int x);
int main ()
{
	int a;
	printf("Give number:");
	scanf("%d",a);
	
	fact (a);
	printf("the factorial is %d",fact(a));
	
	return 0;
	
}
int fact (int x)
{
	if(x==0 ||x==1){
	
	return x=1;
	
	}


else    
{
	
	return (x*fact(x-1));
}}

