#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int years;
	printf("\nEnter a Year: ");
	scanf("%d",&years);

	if(years%4==0){
	printf("\nLeap Year");
	}
	else{
	printf("\nNot a Leap Year");
	}
	getch();
}