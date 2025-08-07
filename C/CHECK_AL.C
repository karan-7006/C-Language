#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	char ch;

	printf("\n Enter any Character: ");
	scanf("%c",&ch);

	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
	printf("\nCharcter is an Alphabet");
	}
	else{
	printf("\nCharacter is not an Alphabet");
	}
	getch();
}