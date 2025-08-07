#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int age;
	printf("\nEnter Your Age: ");
	scanf("%d",&age);
	if(age>=18 && age<=100){
	printf("\nEligible For Vote");
	}
	else{
	printf("\nNot Eligible For Vote");
	}

	getch();
}