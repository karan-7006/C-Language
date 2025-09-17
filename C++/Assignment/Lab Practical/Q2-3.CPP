#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();

	int a=10, b=5;

	cout << "Arithmetic Operators:\n";
	cout << "a + b = " << (a+b) << "\n";
	cout << "a - b = " << (a-b) << "\n";
	cout << "a * b = " << (a*b) << "\n";
	cout << "a / b = " << (a/b) << "\n";
	cout << "a % b = " << (a%b) << "\n\n";

	cout << "Relational Operators:\n";
	cout << "a != b : " << (a!=b) << "\n";
	cout << "a == b : " << (a==b) << "\n";
	cout << "a > b : " << (a>b) << "\n";
	cout << "a < b : " << (a<b) << "\n";
	cout << "a >= b : " << (a>=b) << "\n";
	cout << "a <= b : " << (a<=b) << "\n\n";

	cout << "Logical Operators:\n";
	cout << "(a > 0 && b > 0) : " << ((a>0) && (b>0)) << "\n";
	cout << "(a > 0 || b < 0) : " << ((a>0) || (b<0)) << "\n";
	cout << "!(a == b)        : " << (!(a == b)) << "\n\n";

	getch();
}
