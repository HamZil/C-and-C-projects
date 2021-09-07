#include<stdio.h>

int main ()
{
	int account;
	char name[30];
	double balance;
	
	FILE *cfptr;
	if((cfptr=fopen("hamza.txt","r")) == NULL ){
		printf("File could not opened\n");
	}
	else{
		printf("%-10s%-13s%s","account" ,"Name", "Balance");
		fscanf(cfptr,"%d%s%lf",&account,name,&balance);
	
	
	while(!feof(cfptr)){
		printf("%-10s%-13s%7.2lf\n",account,name,balance );
		fscanf(cfptr,"%d%s%lf",&account,name,&balance);
	}
	fclose(cfptr);
}
	return 0;	
}
