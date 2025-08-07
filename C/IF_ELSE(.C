#include<stdio.h>
#include<conio.h>

void main(){
	int password;
	clrscr();
	printf("Enter Your Password: ");
	scanf("%d",&password);

	if(password==123)
	{
	printf("Phone Unlocked!!");
	}
	else{
	printf("Invalid Password!!");
	}
	getch();
	}