#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();

	int length, breadth, area;

	cout << "Enter Length of Rectangle: ";
	cin >> length;

	cout << "Enter breadth of Rectangle: ";
	cin >> breadth;

	area = length + breadth;
	cout << "Area of Rectangle = " << area;

	getch();
}