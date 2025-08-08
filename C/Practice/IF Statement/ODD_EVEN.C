#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int number;

	printf("\nEnter Your Number: ");
	scanf("%d",&number);

	if(number%2==0){
	printf("\nEven Number");
	}
	else{
	printf("\nOdd Number\n");
	}

	getch();
}