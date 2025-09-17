#include<iostream.h>
#include<conio.h>

void main(){
	clrscr();

	int secret = 42;
	int guess;

	cout << "Guess the number between 1 and 100!\n";

	do{
		cout << "Enter Your guess: ";
		cin >> guess;

		if(guess > secret)
		cout << "Too High! Try again.\n";
		else if(guess < secret)
		cout << "Too Low! Try again.\n";
		else
		cout << "Correct! You guessed it!\n";
	}while (guess != secret);
	getch();
}