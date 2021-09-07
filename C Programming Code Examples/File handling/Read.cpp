#include<stdio.h>

int main ()
{
	int account;
	char name[30];
	double balance;
	
	FILE *cfptr;
	if((cfptr=fopen("hamza.txt","w")) == NULL ){
		printf("File could not opened\n");
	}
	else{
		printf("Enter account , Name , Balance.\n");
		printf("Enter EOF to end the input");
		printf("? ");
		scanf("%d%s%lf",&account,name,&balance);
	
	
	while(!feof(stdin)){
		fprintf(cfptr," %d %s %.2f\n",account,name,balance );
		printf("? ");
		scanf("%d%s%lf",&account,name,&balance);
	}
	fclose(cfptr);
}
	return 0;	
}
