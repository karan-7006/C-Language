#include<iostream.h>
#include<conio.h>

long factorial(int n){
	if (n == 0 || n == 1)
	return 1;
	else
	return n * factorial(n - 1);
}

void main(){
	clrscr();

	int num;
	cout << "Enter a Number: ";
	cin >> num;

	cout << "Factorial of " << num << " = " << factorial(num);
	getch();
}