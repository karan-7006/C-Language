#include<iostream.h>
#include<conio.h>

int globalvar = 100;

void showScope(){
	int localvar = 50;
	cout << "Inside function:\n";
	cout << "Global Variable = " << globalvar << "\n";
	cout << "Local variable = " << localvar << "\n";
}

void main(){
	clrscr();

	int localvar = 10;
	cout << "Inside main:\n";
	cout << "Global Variable = " << globalvar << "\n";
	cout << "Local Variable = " << localvar  << "\n";

	showScope();

	getch();
}