#include <stdio.h>
int swap(int x , int y);
int main()
{
	int a,b;
	printf("enter value of a:_");
	scanf("%d",&a);
	printf("enter value of b:_");
	scanf("%d",&b);
	swap(a,b);
	
	return 0;
}

int swap(int x,int y)
{
	int tem=x;
	x=y;
	y=tem;
	printf("\nAfter swaping the number");
	printf("\nenter value of a:_%d",x);
	printf("\nenter value of b:_%d",y);
	
}
