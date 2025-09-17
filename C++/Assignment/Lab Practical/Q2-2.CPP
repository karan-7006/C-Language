#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();

	int a=10, b=3;
	float result1;

	result1 = a/b;
	cout << "Implicit Conversion (int / int stored in float); " << result1 << "\n";

	float result2;
	result2 = (float)a/b;
	cout << "Explicit conversion ((float)int / int): "<< result2 << "\n";

	char ch = 'A';
	int asciivalue = ch;
	cout << "Implicit conversion (char 'A' to int): " << asciivalue << "\n";

	int num = 66;
	char letter = (char)num;
	cout << "Explicit conversion (int 66 to char): " << letter << "\n";

	getch();
}