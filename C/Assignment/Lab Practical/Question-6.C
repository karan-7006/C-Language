#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int i;

	printf("\nNumbers from 1 to 10 using while loop:\n");
	i=1;
	while(i<=10){
		printf("%d",i);
		i++;
		}

	printf("\n\nNumbers from 1 to 10 using for Loop:\n");
	for(i=1; i<=10; i++){
		printf("%d",i);
		}
	printf("\n\nNumbers from 1 to 10 using d0-while Loop:\n");
	i=1;
	do{
		printf("%d",i);
		i++;
	}
	while(i<=10);

	getch();
}