#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();

	int age=20;
	float height=5.8;
	char grade='A';

	const double PI = 3.14159;

	cout << "Age = "<< age << "\n";
	cout << "Height = "<< height << "\n" ;
	cout << "Grade = "<< grade << "\n";
	cout << "value of PI (Constant) = "<< PI << "\n";

	age = age + 5;
	height = height + 0.2;

	cout << "\nAfter updating variables: \n";
	cout << "Age = " << age << "\n";
	cout << "Height = = " << height << "\n";

	getch();
}