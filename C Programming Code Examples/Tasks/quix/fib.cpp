#include<stdio.h>
int fib(int x);
int main(void)
{
	int a;
	printf("enter the layer number:_");
	scanf("%d",&a);
	fib(a);
	printf("Value on %dth layer is :_%d",a,fib(a));
	
	return 0;
}
	
	
	int fib(int x)
	{
		if(x==1||x==0)
		{
			return x;
		}
		else
		{
		return	(fib(x-1)+fib(x-2));
		}
}
