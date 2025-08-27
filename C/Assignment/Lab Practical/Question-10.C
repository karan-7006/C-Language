#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();

	int num;
	int *ptr;

	num=10;
	ptr=&num;

	printf("\nOriginal Value of num=%d\n",num);

	*ptr=20;

	printf("\nModified value of num using pointer= %d\n",num);
	getch();
}