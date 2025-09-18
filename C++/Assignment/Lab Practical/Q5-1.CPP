#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();

	int n, i, sum = 0;
	float avg;

	cout << "Enter number of elements: ";
	cin >> n;

	int arr[50];

	cout << "Enter " << n << " integers:\n";
	for (i=0; i<n; i++){
	cin >> arr[i];
	sum += arr[i];
	}

	avg = (float)sum / n;
	cout << "\nSum = " << sum;
	cout << "\nAverage = " << avg;

	getch();
}