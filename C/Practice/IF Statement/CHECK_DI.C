#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	char ch;

	printf("\nEnter Your Value: ");
	scanf("%c",&ch);

	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
	printf("\n'%c' is a Alphabet.", ch);
	}
	else if(ch>='0' && ch<='9'){
	printf("\n'%c'is a Digit.", ch);
	}
	else{
	printf("\n'%c' is a Special Character.", ch);
	}
	getch();
}