#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();

	int num, i;

	cout << "Enter a number: ";
	cin >> num;

	cout << "\nMultiplication Table of " << num << ":\n";

	for (i=1; i<=10; i++){
	cout << num << "x" << i <<"="<< (num * i) << "\n";
	}
	getch();
}