#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();

	char name[50];
	int age;

	cout << "Enter Your Name: ";
	cin >>name;

	cout << "Enter Your Age: ";
	cin >> age;

	cout << "\nHello, " << name << "! You are " << age << "Years Old.";

	getch();
}