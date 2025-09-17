#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();

	int num1, num2, sum;

	cout << "Enter First Number: ";
	cin >> num1;

	cout << "Enter Second Number: ";
	cin >> num2;

	sum = num1 + num2;

	cout << "\nThe Sum of " << num1 << "and" << num2 << "is: " << sum;
	getch();
}