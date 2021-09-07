#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int multiply(int a,int b);
int main(void)
{
	int x,y;
	printf(" Enter vale of x no:_");
	scanf("%d",&x);
	printf(" Enter value of y no:_");
	scanf("%d",&y);
	sum (x,y);
	sub (x,y);
	multiply (x,y);



printf("sum is %d\n",sum(x,y));
printf("sub is %d\n",sub(x,y));
printf("multiply is %d\n",multiply(x,y));

}
	int sum (int a,int b){
		 return a+b;
	}
	int sub (int a, int b)
	{
    return a-b;
   }
    int multiply (int a,int b)
	{ 
    return a*b;
}
