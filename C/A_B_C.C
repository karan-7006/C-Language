#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int a,b,c;

	printf("\n Enter A Value: ");
	scanf("%d",&a);

	printf("\n Enter B Value: ");
	scanf("%d",&b);

	printf("\n Enter C Value: ");
	scanf("%d",&c);

	if(a>b){
		if(a>c){
		printf("\nA is Greatest!!");
		}
	}
	else if(b>a){
		if(b>c){
		printf("\nB is Greatest!!");
		}
		else{
		printf("\nC is Greatest!!");
		}
	}
	getch();

}